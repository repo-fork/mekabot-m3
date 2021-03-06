#Copyright  2008, Meka Robotics
#All rights reserved.
#http://mekabot.com

#Redistribution and use in source and binary forms, with or without
#modification, are permitted. 


#THIS SOFTWARE IS PROVIDED BY THE Copyright HOLDERS AND CONTRIBUTORS
#"AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
#LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
#FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
#Copyright OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
#INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES INCLUDING,
#BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
#LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
#CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
#LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
#ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
#POSSIBILITY OF SUCH DAMAGE.

import time
import numpy.numarray as na
#import Numeric as nu
import math
import os 
import sys
import yaml
import m3.unit_conversion as m3u
from m3qa.calibrate import *
from m3qa.calibrate_sensors import *
from m3qa.calibrate_actuator_ec_r2 import *
import m3.actuator_ec_pb2 as aec
import m3qa.config_head_s2r2 as s2r2

# ######################################## Default S2 ############################################################
config_default_s2_j0={
	'calib':s2r2.config_head_s2r2_actuator_j0['calib'],
	'param':s2r2.config_head_s2r2_actuator_j0['param'],
	'param_internal':
	{
		'joint_limits': [-36.0,19.0], 
	}
}
config_default_s2_j1={
	'calib':s2r2.config_head_s2r2_actuator_j1['calib'],
	'param':s2r2.config_head_s2r2_actuator_j1['param'],
	'param_internal':
	{
		'joint_limits': [-60.0,60.0], 
	}
}
config_default_s2_j2={
	'calib':s2r2.config_head_s2r2_actuator_j2['calib'],
	'param':s2r2.config_head_s2r2_actuator_j2['param'],
	'param_internal':
	{
		'joint_limits': [-20.0,20.0], 
	}
}
config_default_s2_j3={
	'calib':s2r2.config_head_s2r2_actuator_j3['calib'],
	'param':s2r2.config_head_s2r2_actuator_j3['param'],
	'param_internal':
	{
		'joint_limits': [-7.5,13.0], 
	}
}
config_default_s2_j4={
	'calib':s2r2.config_head_s2r2_actuator_j4['calib'],
	'param':s2r2.config_head_s2r2_actuator_j4['param'],
	'param_internal':
	{
		'joint_limits': [-65.0,65.0], 
	}
}
config_default_s2_j5={
	'calib':s2r2.config_head_s2r2_actuator_j5['calib'],
	'param':s2r2.config_head_s2r2_actuator_j5['param'],
	'param_internal':
	{
		'joint_limits': [-36.0,36.0], 
	}
}
config_default_s2_j6={
	'calib':s2r2.config_head_s2r2_actuator_j6['calib'],
	'param':s2r2.config_head_s2r2_actuator_j6['param'],
	'param_internal':
	{
		'joint_limits': [-40.0,32.0], 
	}
}
# ######################################## ENS S2 ############################################################
config_default_s2_j7={
	'calib':s2r2.config_head_s2r2_actuator_j7_ens_eyelids['calib'],
	'param':s2r2.config_head_s2r2_actuator_j7_ens_eyelids['param'],
	'param_internal':
	{
		'joint_limits': [0.0,191.0], 
		'pwm_theta': [-800,800]
	}
}
# ###########################################################################

class M3Calibrate_Head_S2R2(M3CalibrateActuatorEcR2):
	def __init__(self):
		M3CalibrateActuatorEcR2.__init__(self)
	def do_task(self,ct):
		if ct=='tt':
			self.reset_sensor('theta')
			if self.jid>=7:
				self.calibrate_theta(use_pwm=True)
			else:
				self.calibrate_theta()
			self.write_config()
			return True
		if M3CalibrateActuatorEcR2.do_task(self,ct):
			return True
		return False
	
	def print_tasks(self):
		M3Calibrate.print_tasks(self)
		print 'et: ext_temp'
		print 'at: amp_temp'
		print 'sa: sensor analyze'
		print 'tt: calibrate theta'
		print 'zt: zero theta'

			
	def start(self,ctype):

		self.joint_names=['Neck Tilt J0',
						  'Neck Pan J1',
						  'Head Roll J2',
						  'Head Tilt J3',
						  'Eye Tilt J4',
						  'Eye Pan Right J5',
						  'Eye Pan Left J6',
						  'Eyelids J7']
		self.config_default=[
			config_default_s2_j0,
			config_default_s2_j1,
			config_default_s2_j2,
			config_default_s2_j3,
			config_default_s2_j4,
			config_default_s2_j5,
			config_default_s2_j6,
			config_default_s2_j7]

		if not M3CalibrateActuatorEcR2.start(self,ctype):
			return False
		self.jid=int(self.comp_ec.name[self.comp_ec.name.find('_j')+2:])
		self.calib_default=self.config_default[self.jid]['calib']
		self.param_default=self.config_default[self.jid]['param']
		self.param_internal=self.config_default[self.jid]['param_internal']
		print 'Calibrating joint',self.joint_names[self.jid]
		return True


		
