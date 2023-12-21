# 게임에 필요한 객체(노드,음식카드,축제카드,수강 이력) 정보 저장 
 
//
//  smm_node.c
//  SMMarble
//
//  Created by EUNSEON SUH on 2023/12/21.
//

#include "smm_common.h"
#include "smm_object.h"
#include <string.h>

#define MAX_NODETYPE    7
#define MAX_GRADE       9



//object generation
void smmObj_genNode(void)
{
    
}



//member retrieving



//element to string
char* smmObj_getNodeName(smmNode_e type)
{
    return smmNodeName[type];
}

char* smmObj_getGradeName(smmGrade_e grade)
{
    return smmGradeName[grade];
}

