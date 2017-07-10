/******************************************************************************
  * Copyright (C) 2017 by Yifan Jiang                                          *
  * jiangyi@student.ethz.com                                                   *
  *                                                                            *
  * This program is distributed in the hope that it will be useful,            *
  * but WITHOUT ANY WARRANTY; without even the implied warranty of             *
  * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.                       *
  ******************************************************************************/

  /*
 * Initialize object dictionary entries here
 * This file is autmatically generated, do not make changes here
 */

#include "ObjectDictionary.h"
#include "SystemWarehouse.h"

void ObjectDictionary::InitObd(void){


  _ObdEntryList[0]._Idx = 257;
  _ObdEntryList[0]._AccessType = 0;
  _ObdEntryList[0]._DataType = 0;
  _ObdEntryList[0]._Instance = static_cast<ObjectDictionaryEntryBase*>(SystemWarehouse::instance7_GetInstance());
  _ObdEntryList[0]._AccessFunction = static_cast<void (ObjectDictionaryEntryBase::*)(ObdAccessHandle*)>(&class1::method7);

  _ObdEntryList[1]._Idx = 513;
  _ObdEntryList[1]._AccessType = 0;
  _ObdEntryList[1]._DataType = 0;
  _ObdEntryList[1]._Instance = static_cast<ObjectDictionaryEntryBase*>(SystemWarehouse::instance5_GetInstance());
  _ObdEntryList[1]._AccessFunction = static_cast<void (ObjectDictionaryEntryBase::*)(ObdAccessHandle*)>(&class1::method5);

  _ObdEntryList[2]._Idx = 768;
  _ObdEntryList[2]._AccessType = 0;
  _ObdEntryList[2]._DataType = 0;
  _ObdEntryList[2]._Instance = static_cast<ObjectDictionaryEntryBase*>(SystemWarehouse::instance1_GetInstance());
  _ObdEntryList[2]._AccessFunction = static_cast<void (ObjectDictionaryEntryBase::*)(ObdAccessHandle*)>(&class1::method1);

  _ObdEntryList[3]._Idx = 2561;
  _ObdEntryList[3]._AccessType = 0;
  _ObdEntryList[3]._DataType = 0;
  _ObdEntryList[3]._Instance = static_cast<ObjectDictionaryEntryBase*>(SystemWarehouse::instance6_GetInstance());
  _ObdEntryList[3]._AccessFunction = static_cast<void (ObjectDictionaryEntryBase::*)(ObdAccessHandle*)>(&class1::method6);

  _ObdEntryList[4]._Idx = 2562;
  _ObdEntryList[4]._AccessType = 0;
  _ObdEntryList[4]._DataType = 0;
  _ObdEntryList[4]._Instance = static_cast<ObjectDictionaryEntryBase*>(SystemWarehouse::instance4_GetInstance());
  _ObdEntryList[4]._AccessFunction = static_cast<void (ObjectDictionaryEntryBase::*)(ObdAccessHandle*)>(&class1::method4);

  _ObdEntryList[5]._Idx = 2563;
  _ObdEntryList[5]._AccessType = 0;
  _ObdEntryList[5]._DataType = 0;
  _ObdEntryList[5]._Instance = static_cast<ObjectDictionaryEntryBase*>(SystemWarehouse::instance2_GetInstance());
  _ObdEntryList[5]._AccessFunction = static_cast<void (ObjectDictionaryEntryBase::*)(ObdAccessHandle*)>(&class1::method2);

  _ObdEntryList[6]._Idx = 2818;
  _ObdEntryList[6]._AccessType = 0;
  _ObdEntryList[6]._DataType = 0;
  _ObdEntryList[6]._Instance = static_cast<ObjectDictionaryEntryBase*>(SystemWarehouse::instance3_GetInstance());
  _ObdEntryList[6]._AccessFunction = static_cast<void (ObjectDictionaryEntryBase::*)(ObdAccessHandle*)>(&class1::method3);

}