/******************************************************************************
 * Copyright (C) 2017 by Yifan Jiang                                          *
 * jiangyi@student.ethz.com                                                   *
 *                                                                            *
 * This program is distributed in the hope that it will be useful,            *
 * but WITHOUT ANY WARRANTY; without even the implied warranty of             *
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.                       *
 ******************************************************************************/

/*
* ObjectDictionary class
*
* implements object dictionary, which is compatible with CANOpen standard (CiA301)
* but is also extendable to make use of higher-BW communication methods
*/

#ifndef OBJECT_DICTIONARY_H
#define OBJECT_DICTIONARY_H

#include "stdint.h"
#include "F28x_Project.h"

#include "CommutationMaster.h"
#include "CiATypeDef.h"
#include "ObjectDictionaryEntryBase.h"
#include "CurrentControlProcess.h"

#define MAX_NO_OF_ENTRY 100

class ObjectDictionary{

public:

  ObjectDictionary(CommutationMaster * CommutationMasterPtr)
  {
    _CommutationMaster = CommutationMasterPtr;

    uint16_t i;
    for(i=0; i<MAX_NO_OF_ENTRY; i++){
      _InstanceArray[i] = NULL;
      _AccessFunctionArray[i] = NULL;
    }

    _AccessFunctionArray[0] = static_cast<uint16_t (ObjectDictionaryEntryBase::*)(CiA_Message*)> (&CommutationMaster::AccessParameter);
  }

  ~ObjectDictionary(){}

  void AccessEntry(CiA_Message * msg){
    uint16_t hehe = (_CommutationMaster->*(_AccessFunctionArray[0]))(msg);
    hehe += 1;
  }

private:

  CommutationMaster * _CommutationMaster;
  ObjectDictionaryEntryBase * _InstanceArray[ MAX_NO_OF_ENTRY ];
  uint16_t (ObjectDictionaryEntryBase::*_AccessFunctionArray[ MAX_NO_OF_ENTRY ])(CiA_Message *);


};


#endif
