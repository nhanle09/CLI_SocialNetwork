#include "dds_builtinTopicsSplDcps.h"
#include "ccpp_dds_builtinTopics.h"
#include "dds_type_aliases.h"

const char *
__DDS_Duration_t__name(void)
{
    return (const char*)"DDS::Duration_t";
}

const char *
__DDS_Duration_t__keys(void)
{
    return (const char*)"";
}

const char *
__DDS_UserDataQosPolicy__name(void)
{
    return (const char*)"DDS::UserDataQosPolicy";
}

const char *
__DDS_UserDataQosPolicy__keys(void)
{
    return (const char*)"";
}

const char *
__DDS_TopicDataQosPolicy__name(void)
{
    return (const char*)"DDS::TopicDataQosPolicy";
}

const char *
__DDS_TopicDataQosPolicy__keys(void)
{
    return (const char*)"";
}

const char *
__DDS_GroupDataQosPolicy__name(void)
{
    return (const char*)"DDS::GroupDataQosPolicy";
}

const char *
__DDS_GroupDataQosPolicy__keys(void)
{
    return (const char*)"";
}

const char *
__DDS_TransportPriorityQosPolicy__name(void)
{
    return (const char*)"DDS::TransportPriorityQosPolicy";
}

const char *
__DDS_TransportPriorityQosPolicy__keys(void)
{
    return (const char*)"";
}

const char *
__DDS_LifespanQosPolicy__name(void)
{
    return (const char*)"DDS::LifespanQosPolicy";
}

const char *
__DDS_LifespanQosPolicy__keys(void)
{
    return (const char*)"";
}

const char *
__DDS_DurabilityQosPolicy__name(void)
{
    return (const char*)"DDS::DurabilityQosPolicy";
}

const char *
__DDS_DurabilityQosPolicy__keys(void)
{
    return (const char*)"";
}

const char *
__DDS_PresentationQosPolicy__name(void)
{
    return (const char*)"DDS::PresentationQosPolicy";
}

const char *
__DDS_PresentationQosPolicy__keys(void)
{
    return (const char*)"";
}

const char *
__DDS_DeadlineQosPolicy__name(void)
{
    return (const char*)"DDS::DeadlineQosPolicy";
}

const char *
__DDS_DeadlineQosPolicy__keys(void)
{
    return (const char*)"";
}

const char *
__DDS_LatencyBudgetQosPolicy__name(void)
{
    return (const char*)"DDS::LatencyBudgetQosPolicy";
}

const char *
__DDS_LatencyBudgetQosPolicy__keys(void)
{
    return (const char*)"";
}

const char *
__DDS_OwnershipQosPolicy__name(void)
{
    return (const char*)"DDS::OwnershipQosPolicy";
}

const char *
__DDS_OwnershipQosPolicy__keys(void)
{
    return (const char*)"";
}

const char *
__DDS_OwnershipStrengthQosPolicy__name(void)
{
    return (const char*)"DDS::OwnershipStrengthQosPolicy";
}

const char *
__DDS_OwnershipStrengthQosPolicy__keys(void)
{
    return (const char*)"";
}

const char *
__DDS_LivelinessQosPolicy__name(void)
{
    return (const char*)"DDS::LivelinessQosPolicy";
}

const char *
__DDS_LivelinessQosPolicy__keys(void)
{
    return (const char*)"";
}

const char *
__DDS_TimeBasedFilterQosPolicy__name(void)
{
    return (const char*)"DDS::TimeBasedFilterQosPolicy";
}

const char *
__DDS_TimeBasedFilterQosPolicy__keys(void)
{
    return (const char*)"";
}

const char *
__DDS_PartitionQosPolicy__name(void)
{
    return (const char*)"DDS::PartitionQosPolicy";
}

const char *
__DDS_PartitionQosPolicy__keys(void)
{
    return (const char*)"";
}

const char *
__DDS_ReliabilityQosPolicy__name(void)
{
    return (const char*)"DDS::ReliabilityQosPolicy";
}

const char *
__DDS_ReliabilityQosPolicy__keys(void)
{
    return (const char*)"";
}

const char *
__DDS_DestinationOrderQosPolicy__name(void)
{
    return (const char*)"DDS::DestinationOrderQosPolicy";
}

const char *
__DDS_DestinationOrderQosPolicy__keys(void)
{
    return (const char*)"";
}

const char *
__DDS_HistoryQosPolicy__name(void)
{
    return (const char*)"DDS::HistoryQosPolicy";
}

const char *
__DDS_HistoryQosPolicy__keys(void)
{
    return (const char*)"";
}

const char *
__DDS_ResourceLimitsQosPolicy__name(void)
{
    return (const char*)"DDS::ResourceLimitsQosPolicy";
}

const char *
__DDS_ResourceLimitsQosPolicy__keys(void)
{
    return (const char*)"";
}

const char *
__DDS_DurabilityServiceQosPolicy__name(void)
{
    return (const char*)"DDS::DurabilityServiceQosPolicy";
}

const char *
__DDS_DurabilityServiceQosPolicy__keys(void)
{
    return (const char*)"";
}

const char *
__DDS_ParticipantBuiltinTopicData__name(void)
{
    return (const char*)"DDS::ParticipantBuiltinTopicData";
}

const char *
__DDS_ParticipantBuiltinTopicData__keys(void)
{
    return (const char*)"key";
}

const char *
__DDS_TopicBuiltinTopicData__name(void)
{
    return (const char*)"DDS::TopicBuiltinTopicData";
}

const char *
__DDS_TopicBuiltinTopicData__keys(void)
{
    return (const char*)"key";
}

const char *
__DDS_PublicationBuiltinTopicData__name(void)
{
    return (const char*)"DDS::PublicationBuiltinTopicData";
}

const char *
__DDS_PublicationBuiltinTopicData__keys(void)
{
    return (const char*)"key";
}

const char *
__DDS_SubscriptionBuiltinTopicData__name(void)
{
    return (const char*)"DDS::SubscriptionBuiltinTopicData";
}

const char *
__DDS_SubscriptionBuiltinTopicData__keys(void)
{
    return (const char*)"key";
}

#include <v_kernel.h>
#include <v_topic.h>
#include <os_stdlib.h>
#include <string.h>
#include <os_report.h>

c_bool
__DDS_octSeq__copyIn(
    c_base base,
    ::DDS::octSeq *from,
    _DDS_octSeq *to)
{
    c_bool result = OS_C_TRUE;
    (void) base;

/* Code generated by /home/dds/OvernightTests/tmp.EvVa0SFLQ3/build/src/tools/idlpp/code/idl_genCorbaCxxCopyin.c at line 2411 */

    static c_type type0 = NULL;
    c_type subtype0 = NULL;
    c_long length0;
    c_octet *dest0;

    if (type0 == NULL) {
        subtype0 = c_type(c_metaResolve (c_metaObject(base), "c_octet"));
        type0 = c_metaSequenceTypeNew(c_metaObject(base),"C_SEQUENCE<c_octet>",subtype0,0);
        c_free(subtype0);
    }
    length0 = (c_long)(*from).length();
#ifdef OSPL_BOUNDS_CHECK
    dest0 = (c_octet *)c_newSequence(c_collectionType(type0), length0);
    {
    /* Code generated by /home/dds/OvernightTests/tmp.EvVa0SFLQ3/build/src/tools/idlpp/code/idl_genCorbaCxxCopyin.c at line 1873 */
            c_octet *buf0;
        buf0 = (c_octet *)(*from).get_buffer();
        memcpy (dest0,buf0,length0* sizeof(*dest0));
    }
    *to = (_DDS_octSeq)dest0;
#else
    dest0 = (c_octet *)c_newSequence(c_collectionType(type0), length0);
    {
    /* Code generated by /home/dds/OvernightTests/tmp.EvVa0SFLQ3/build/src/tools/idlpp/code/idl_genCorbaCxxCopyin.c at line 1873 */
            c_octet *buf0;
        buf0 = (c_octet *)(*from).get_buffer();
        memcpy (dest0,buf0,length0* sizeof(*dest0));
    }
    *to = (_DDS_octSeq)dest0;
#endif
    return result;
}

c_bool
__DDS_BuiltinTopicKey_t__copyIn(
    c_base base,
    ::DDS::BuiltinTopicKey_t *from,
    _DDS_BuiltinTopicKey_t *to)
{
    c_bool result = OS_C_TRUE;
    (void) base;

    memcpy (to, *from, sizeof (*to));
    return result;
}

c_bool
__DDS_StringSeq__copyIn(
    c_base base,
    ::DDS::StringSeq *from,
    _DDS_StringSeq *to)
{
    c_bool result = OS_C_TRUE;
    (void) base;

/* Code generated by /home/dds/OvernightTests/tmp.EvVa0SFLQ3/build/src/tools/idlpp/code/idl_genCorbaCxxCopyin.c at line 2411 */

    static c_type type0 = NULL;
    c_type subtype0 = NULL;
    c_long length0;
    c_string *dest0;

    if (type0 == NULL) {
        subtype0 = c_type(c_metaResolve (c_metaObject(base), "c_string"));
        type0 = c_metaSequenceTypeNew(c_metaObject(base),"C_SEQUENCE<c_string>",subtype0,0);
        c_free(subtype0);
    }
    length0 = (c_long)(*from).length();
#ifdef OSPL_BOUNDS_CHECK
    dest0 = (c_string *)c_newSequence(c_collectionType(type0), length0);
    {
    /* Code generated by /home/dds/OvernightTests/tmp.EvVa0SFLQ3/build/src/tools/idlpp/code/idl_genCorbaCxxCopyin.c at line 1928 */
        unsigned int i0;
        for (i0 = 0; (i0 < (unsigned int)length0) && result; i0++) {
#ifdef OSPL_BOUNDS_CHECK
            if((*from)[i0]){
                dest0[i0] = c_stringNew(base, (*from)[i0]);
            } else {
                OS_REPORT (OS_ERROR, "copyIn", 0,"Element of 'DDS.*from' of type 'c_string' is NULL.");
                result = OS_C_FALSE;
            }
#else
            dest0[i0] = c_stringNew(base, (*from)[i0]);
#endif
        }
    }
    *to = (_DDS_StringSeq)dest0;
#else
    dest0 = (c_string *)c_newSequence(c_collectionType(type0), length0);
    {
    /* Code generated by /home/dds/OvernightTests/tmp.EvVa0SFLQ3/build/src/tools/idlpp/code/idl_genCorbaCxxCopyin.c at line 1928 */
        unsigned int i0;
        for (i0 = 0; (i0 < (unsigned int)length0) && result; i0++) {
#ifdef OSPL_BOUNDS_CHECK
            if((*from)[i0]){
                dest0[i0] = c_stringNew(base, (*from)[i0]);
            } else {
                OS_REPORT (OS_ERROR, "copyIn", 0,"Element of 'DDS.*from' of type 'c_string' is NULL.");
                result = OS_C_FALSE;
            }
#else
            dest0[i0] = c_stringNew(base, (*from)[i0]);
#endif
        }
    }
    *to = (_DDS_StringSeq)dest0;
#endif
    return result;
}

c_bool
__DDS_Duration_t__copyIn(
    c_base base,
    struct ::DDS::Duration_t *from,
    struct _DDS_Duration_t *to)
{
    c_bool result = OS_C_TRUE;
    (void) base;

    to->sec = (c_long)from->sec;
    to->nanosec = (c_ulong)from->nanosec;
    return result;
}

c_bool
__DDS_UserDataQosPolicy__copyIn(
    c_base base,
    struct ::DDS::UserDataQosPolicy *from,
    struct _DDS_UserDataQosPolicy *to)
{
    c_bool result = OS_C_TRUE;
    (void) base;

    if(result){
        extern c_bool __DDS_octSeq__copyIn(c_base, ::DDS::octSeq *, _DDS_octSeq *);
        result = __DDS_octSeq__copyIn(base, &from->value, &to->value);
    }
    return result;
}

c_bool
__DDS_TopicDataQosPolicy__copyIn(
    c_base base,
    struct ::DDS::TopicDataQosPolicy *from,
    struct _DDS_TopicDataQosPolicy *to)
{
    c_bool result = OS_C_TRUE;
    (void) base;

    if(result){
        extern c_bool __DDS_octSeq__copyIn(c_base, ::DDS::octSeq *, _DDS_octSeq *);
        result = __DDS_octSeq__copyIn(base, &from->value, &to->value);
    }
    return result;
}

c_bool
__DDS_GroupDataQosPolicy__copyIn(
    c_base base,
    struct ::DDS::GroupDataQosPolicy *from,
    struct _DDS_GroupDataQosPolicy *to)
{
    c_bool result = OS_C_TRUE;
    (void) base;

    if(result){
        extern c_bool __DDS_octSeq__copyIn(c_base, ::DDS::octSeq *, _DDS_octSeq *);
        result = __DDS_octSeq__copyIn(base, &from->value, &to->value);
    }
    return result;
}

c_bool
__DDS_TransportPriorityQosPolicy__copyIn(
    c_base base,
    struct ::DDS::TransportPriorityQosPolicy *from,
    struct _DDS_TransportPriorityQosPolicy *to)
{
    c_bool result = OS_C_TRUE;
    (void) base;

    to->value = (c_long)from->value;
    return result;
}

c_bool
__DDS_LifespanQosPolicy__copyIn(
    c_base base,
    struct ::DDS::LifespanQosPolicy *from,
    struct _DDS_LifespanQosPolicy *to)
{
    c_bool result = OS_C_TRUE;
    (void) base;

    if(result){
        extern c_bool __DDS_Duration_t__copyIn(c_base, ::DDS::Duration_t *, _DDS_Duration_t *);
        result = __DDS_Duration_t__copyIn(base, &from->duration, &to->duration);
    }
    return result;
}

c_bool
__DDS_DurabilityQosPolicy__copyIn(
    c_base base,
    struct ::DDS::DurabilityQosPolicy *from,
    struct _DDS_DurabilityQosPolicy *to)
{
    c_bool result = OS_C_TRUE;
    (void) base;

#ifdef OSPL_BOUNDS_CHECK
    if((((c_long)from->kind) >= 0) && (((c_long)from->kind) < 4) ){
        to->kind = (enum _DDS_DurabilityQosPolicyKind)from->kind;
    } else {
        OS_REPORT (OS_ERROR, "copyIn", 0,"Member 'DDS::DurabilityQosPolicy.kind' of type 'DurabilityQosPolicyKind' is out of range.");
        result = OS_C_FALSE;
    }
#else
    to->kind = (enum _DDS_DurabilityQosPolicyKind)from->kind;
#endif
    return result;
}

c_bool
__DDS_PresentationQosPolicy__copyIn(
    c_base base,
    struct ::DDS::PresentationQosPolicy *from,
    struct _DDS_PresentationQosPolicy *to)
{
    c_bool result = OS_C_TRUE;
    (void) base;

#ifdef OSPL_BOUNDS_CHECK
    if((((c_long)from->access_scope) >= 0) && (((c_long)from->access_scope) < 3) ){
        to->access_scope = (enum _DDS_PresentationQosPolicyAccessScopeKind)from->access_scope;
    } else {
        OS_REPORT (OS_ERROR, "copyIn", 0,"Member 'DDS::PresentationQosPolicy.access_scope' of type 'PresentationQosPolicyAccessScopeKind' is out of range.");
        result = OS_C_FALSE;
    }
#else
    to->access_scope = (enum _DDS_PresentationQosPolicyAccessScopeKind)from->access_scope;
#endif
    to->coherent_access = (c_bool)from->coherent_access;
    to->ordered_access = (c_bool)from->ordered_access;
    return result;
}

c_bool
__DDS_DeadlineQosPolicy__copyIn(
    c_base base,
    struct ::DDS::DeadlineQosPolicy *from,
    struct _DDS_DeadlineQosPolicy *to)
{
    c_bool result = OS_C_TRUE;
    (void) base;

    if(result){
        extern c_bool __DDS_Duration_t__copyIn(c_base, ::DDS::Duration_t *, _DDS_Duration_t *);
        result = __DDS_Duration_t__copyIn(base, &from->period, &to->period);
    }
    return result;
}

c_bool
__DDS_LatencyBudgetQosPolicy__copyIn(
    c_base base,
    struct ::DDS::LatencyBudgetQosPolicy *from,
    struct _DDS_LatencyBudgetQosPolicy *to)
{
    c_bool result = OS_C_TRUE;
    (void) base;

    if(result){
        extern c_bool __DDS_Duration_t__copyIn(c_base, ::DDS::Duration_t *, _DDS_Duration_t *);
        result = __DDS_Duration_t__copyIn(base, &from->duration, &to->duration);
    }
    return result;
}

c_bool
__DDS_OwnershipQosPolicy__copyIn(
    c_base base,
    struct ::DDS::OwnershipQosPolicy *from,
    struct _DDS_OwnershipQosPolicy *to)
{
    c_bool result = OS_C_TRUE;
    (void) base;

#ifdef OSPL_BOUNDS_CHECK
    if((((c_long)from->kind) >= 0) && (((c_long)from->kind) < 2) ){
        to->kind = (enum _DDS_OwnershipQosPolicyKind)from->kind;
    } else {
        OS_REPORT (OS_ERROR, "copyIn", 0,"Member 'DDS::OwnershipQosPolicy.kind' of type 'OwnershipQosPolicyKind' is out of range.");
        result = OS_C_FALSE;
    }
#else
    to->kind = (enum _DDS_OwnershipQosPolicyKind)from->kind;
#endif
    return result;
}

c_bool
__DDS_OwnershipStrengthQosPolicy__copyIn(
    c_base base,
    struct ::DDS::OwnershipStrengthQosPolicy *from,
    struct _DDS_OwnershipStrengthQosPolicy *to)
{
    c_bool result = OS_C_TRUE;
    (void) base;

    to->value = (c_long)from->value;
    return result;
}

c_bool
__DDS_LivelinessQosPolicy__copyIn(
    c_base base,
    struct ::DDS::LivelinessQosPolicy *from,
    struct _DDS_LivelinessQosPolicy *to)
{
    c_bool result = OS_C_TRUE;
    (void) base;

#ifdef OSPL_BOUNDS_CHECK
    if((((c_long)from->kind) >= 0) && (((c_long)from->kind) < 3) ){
        to->kind = (enum _DDS_LivelinessQosPolicyKind)from->kind;
    } else {
        OS_REPORT (OS_ERROR, "copyIn", 0,"Member 'DDS::LivelinessQosPolicy.kind' of type 'LivelinessQosPolicyKind' is out of range.");
        result = OS_C_FALSE;
    }
#else
    to->kind = (enum _DDS_LivelinessQosPolicyKind)from->kind;
#endif
    if(result){
        extern c_bool __DDS_Duration_t__copyIn(c_base, ::DDS::Duration_t *, _DDS_Duration_t *);
        result = __DDS_Duration_t__copyIn(base, &from->lease_duration, &to->lease_duration);
    }
    return result;
}

c_bool
__DDS_TimeBasedFilterQosPolicy__copyIn(
    c_base base,
    struct ::DDS::TimeBasedFilterQosPolicy *from,
    struct _DDS_TimeBasedFilterQosPolicy *to)
{
    c_bool result = OS_C_TRUE;
    (void) base;

    if(result){
        extern c_bool __DDS_Duration_t__copyIn(c_base, ::DDS::Duration_t *, _DDS_Duration_t *);
        result = __DDS_Duration_t__copyIn(base, &from->minimum_separation, &to->minimum_separation);
    }
    return result;
}

c_bool
__DDS_PartitionQosPolicy__copyIn(
    c_base base,
    struct ::DDS::PartitionQosPolicy *from,
    struct _DDS_PartitionQosPolicy *to)
{
    c_bool result = OS_C_TRUE;
    (void) base;

    if(result){
        extern c_bool __DDS_StringSeq__copyIn(c_base, ::DDS::StringSeq *, _DDS_StringSeq *);
        result = __DDS_StringSeq__copyIn(base, &from->name, &to->name);
    }
    return result;
}

c_bool
__DDS_ReliabilityQosPolicy__copyIn(
    c_base base,
    struct ::DDS::ReliabilityQosPolicy *from,
    struct _DDS_ReliabilityQosPolicy *to)
{
    c_bool result = OS_C_TRUE;
    (void) base;

#ifdef OSPL_BOUNDS_CHECK
    if((((c_long)from->kind) >= 0) && (((c_long)from->kind) < 2) ){
        to->kind = (enum _DDS_ReliabilityQosPolicyKind)from->kind;
    } else {
        OS_REPORT (OS_ERROR, "copyIn", 0,"Member 'DDS::ReliabilityQosPolicy.kind' of type 'ReliabilityQosPolicyKind' is out of range.");
        result = OS_C_FALSE;
    }
#else
    to->kind = (enum _DDS_ReliabilityQosPolicyKind)from->kind;
#endif
    if(result){
        extern c_bool __DDS_Duration_t__copyIn(c_base, ::DDS::Duration_t *, _DDS_Duration_t *);
        result = __DDS_Duration_t__copyIn(base, &from->max_blocking_time, &to->max_blocking_time);
    }
    to->synchronous = (c_bool)from->synchronous;
    return result;
}

c_bool
__DDS_DestinationOrderQosPolicy__copyIn(
    c_base base,
    struct ::DDS::DestinationOrderQosPolicy *from,
    struct _DDS_DestinationOrderQosPolicy *to)
{
    c_bool result = OS_C_TRUE;
    (void) base;

#ifdef OSPL_BOUNDS_CHECK
    if((((c_long)from->kind) >= 0) && (((c_long)from->kind) < 2) ){
        to->kind = (enum _DDS_DestinationOrderQosPolicyKind)from->kind;
    } else {
        OS_REPORT (OS_ERROR, "copyIn", 0,"Member 'DDS::DestinationOrderQosPolicy.kind' of type 'DestinationOrderQosPolicyKind' is out of range.");
        result = OS_C_FALSE;
    }
#else
    to->kind = (enum _DDS_DestinationOrderQosPolicyKind)from->kind;
#endif
    return result;
}

c_bool
__DDS_HistoryQosPolicy__copyIn(
    c_base base,
    struct ::DDS::HistoryQosPolicy *from,
    struct _DDS_HistoryQosPolicy *to)
{
    c_bool result = OS_C_TRUE;
    (void) base;

#ifdef OSPL_BOUNDS_CHECK
    if((((c_long)from->kind) >= 0) && (((c_long)from->kind) < 2) ){
        to->kind = (enum _DDS_HistoryQosPolicyKind)from->kind;
    } else {
        OS_REPORT (OS_ERROR, "copyIn", 0,"Member 'DDS::HistoryQosPolicy.kind' of type 'HistoryQosPolicyKind' is out of range.");
        result = OS_C_FALSE;
    }
#else
    to->kind = (enum _DDS_HistoryQosPolicyKind)from->kind;
#endif
    to->depth = (c_long)from->depth;
    return result;
}

c_bool
__DDS_ResourceLimitsQosPolicy__copyIn(
    c_base base,
    struct ::DDS::ResourceLimitsQosPolicy *from,
    struct _DDS_ResourceLimitsQosPolicy *to)
{
    c_bool result = OS_C_TRUE;
    (void) base;

    to->max_samples = (c_long)from->max_samples;
    to->max_instances = (c_long)from->max_instances;
    to->max_samples_per_instance = (c_long)from->max_samples_per_instance;
    return result;
}

c_bool
__DDS_DurabilityServiceQosPolicy__copyIn(
    c_base base,
    struct ::DDS::DurabilityServiceQosPolicy *from,
    struct _DDS_DurabilityServiceQosPolicy *to)
{
    c_bool result = OS_C_TRUE;
    (void) base;

    if(result){
        extern c_bool __DDS_Duration_t__copyIn(c_base, ::DDS::Duration_t *, _DDS_Duration_t *);
        result = __DDS_Duration_t__copyIn(base, &from->service_cleanup_delay, &to->service_cleanup_delay);
    }
#ifdef OSPL_BOUNDS_CHECK
    if((((c_long)from->history_kind) >= 0) && (((c_long)from->history_kind) < 2) ){
        to->history_kind = (enum _DDS_HistoryQosPolicyKind)from->history_kind;
    } else {
        OS_REPORT (OS_ERROR, "copyIn", 0,"Member 'DDS::DurabilityServiceQosPolicy.history_kind' of type 'HistoryQosPolicyKind' is out of range.");
        result = OS_C_FALSE;
    }
#else
    to->history_kind = (enum _DDS_HistoryQosPolicyKind)from->history_kind;
#endif
    to->history_depth = (c_long)from->history_depth;
    to->max_samples = (c_long)from->max_samples;
    to->max_instances = (c_long)from->max_instances;
    to->max_samples_per_instance = (c_long)from->max_samples_per_instance;
    return result;
}

c_bool
__DDS_ParticipantBuiltinTopicData__copyIn(
    c_base base,
    struct ::DDS::ParticipantBuiltinTopicData *from,
    struct _DDS_ParticipantBuiltinTopicData *to)
{
    c_bool result = OS_C_TRUE;
    (void) base;

    if(result){
        extern c_bool __DDS_BuiltinTopicKey_t__copyIn(c_base, ::DDS::BuiltinTopicKey_t *, _DDS_BuiltinTopicKey_t *);
        result = __DDS_BuiltinTopicKey_t__copyIn(base, &from->key, &to->key);
    }
    if(result){
        extern c_bool __DDS_UserDataQosPolicy__copyIn(c_base, ::DDS::UserDataQosPolicy *, _DDS_UserDataQosPolicy *);
        result = __DDS_UserDataQosPolicy__copyIn(base, &from->user_data, &to->user_data);
    }
    return result;
}

c_bool
__DDS_TopicBuiltinTopicData__copyIn(
    c_base base,
    struct ::DDS::TopicBuiltinTopicData *from,
    struct _DDS_TopicBuiltinTopicData *to)
{
    c_bool result = OS_C_TRUE;
    (void) base;

    if(result){
        extern c_bool __DDS_BuiltinTopicKey_t__copyIn(c_base, ::DDS::BuiltinTopicKey_t *, _DDS_BuiltinTopicKey_t *);
        result = __DDS_BuiltinTopicKey_t__copyIn(base, &from->key, &to->key);
    }
#ifdef OSPL_BOUNDS_CHECK
    if(from->name){
        to->name = c_stringNew(base, from->name);
    } else {
        OS_REPORT (OS_ERROR, "copyIn", 0,"Member 'DDS::TopicBuiltinTopicData.name' of type 'c_string' is NULL.");
        result = OS_C_FALSE;
    }
#else
    to->name = c_stringNew(base, from->name);
#endif
#ifdef OSPL_BOUNDS_CHECK
    if(from->type_name){
        to->type_name = c_stringNew(base, from->type_name);
    } else {
        OS_REPORT (OS_ERROR, "copyIn", 0,"Member 'DDS::TopicBuiltinTopicData.type_name' of type 'c_string' is NULL.");
        result = OS_C_FALSE;
    }
#else
    to->type_name = c_stringNew(base, from->type_name);
#endif
    if(result){
        extern c_bool __DDS_DurabilityQosPolicy__copyIn(c_base, ::DDS::DurabilityQosPolicy *, _DDS_DurabilityQosPolicy *);
        result = __DDS_DurabilityQosPolicy__copyIn(base, &from->durability, &to->durability);
    }
    if(result){
        extern c_bool __DDS_DurabilityServiceQosPolicy__copyIn(c_base, ::DDS::DurabilityServiceQosPolicy *, _DDS_DurabilityServiceQosPolicy *);
        result = __DDS_DurabilityServiceQosPolicy__copyIn(base, &from->durability_service, &to->durability_service);
    }
    if(result){
        extern c_bool __DDS_DeadlineQosPolicy__copyIn(c_base, ::DDS::DeadlineQosPolicy *, _DDS_DeadlineQosPolicy *);
        result = __DDS_DeadlineQosPolicy__copyIn(base, &from->deadline, &to->deadline);
    }
    if(result){
        extern c_bool __DDS_LatencyBudgetQosPolicy__copyIn(c_base, ::DDS::LatencyBudgetQosPolicy *, _DDS_LatencyBudgetQosPolicy *);
        result = __DDS_LatencyBudgetQosPolicy__copyIn(base, &from->latency_budget, &to->latency_budget);
    }
    if(result){
        extern c_bool __DDS_LivelinessQosPolicy__copyIn(c_base, ::DDS::LivelinessQosPolicy *, _DDS_LivelinessQosPolicy *);
        result = __DDS_LivelinessQosPolicy__copyIn(base, &from->liveliness, &to->liveliness);
    }
    if(result){
        extern c_bool __DDS_ReliabilityQosPolicy__copyIn(c_base, ::DDS::ReliabilityQosPolicy *, _DDS_ReliabilityQosPolicy *);
        result = __DDS_ReliabilityQosPolicy__copyIn(base, &from->reliability, &to->reliability);
    }
    if(result){
        extern c_bool __DDS_TransportPriorityQosPolicy__copyIn(c_base, ::DDS::TransportPriorityQosPolicy *, _DDS_TransportPriorityQosPolicy *);
        result = __DDS_TransportPriorityQosPolicy__copyIn(base, &from->transport_priority, &to->transport_priority);
    }
    if(result){
        extern c_bool __DDS_LifespanQosPolicy__copyIn(c_base, ::DDS::LifespanQosPolicy *, _DDS_LifespanQosPolicy *);
        result = __DDS_LifespanQosPolicy__copyIn(base, &from->lifespan, &to->lifespan);
    }
    if(result){
        extern c_bool __DDS_DestinationOrderQosPolicy__copyIn(c_base, ::DDS::DestinationOrderQosPolicy *, _DDS_DestinationOrderQosPolicy *);
        result = __DDS_DestinationOrderQosPolicy__copyIn(base, &from->destination_order, &to->destination_order);
    }
    if(result){
        extern c_bool __DDS_HistoryQosPolicy__copyIn(c_base, ::DDS::HistoryQosPolicy *, _DDS_HistoryQosPolicy *);
        result = __DDS_HistoryQosPolicy__copyIn(base, &from->history, &to->history);
    }
    if(result){
        extern c_bool __DDS_ResourceLimitsQosPolicy__copyIn(c_base, ::DDS::ResourceLimitsQosPolicy *, _DDS_ResourceLimitsQosPolicy *);
        result = __DDS_ResourceLimitsQosPolicy__copyIn(base, &from->resource_limits, &to->resource_limits);
    }
    if(result){
        extern c_bool __DDS_OwnershipQosPolicy__copyIn(c_base, ::DDS::OwnershipQosPolicy *, _DDS_OwnershipQosPolicy *);
        result = __DDS_OwnershipQosPolicy__copyIn(base, &from->ownership, &to->ownership);
    }
    if(result){
        extern c_bool __DDS_TopicDataQosPolicy__copyIn(c_base, ::DDS::TopicDataQosPolicy *, _DDS_TopicDataQosPolicy *);
        result = __DDS_TopicDataQosPolicy__copyIn(base, &from->topic_data, &to->topic_data);
    }
    return result;
}

c_bool
__DDS_PublicationBuiltinTopicData__copyIn(
    c_base base,
    struct ::DDS::PublicationBuiltinTopicData *from,
    struct _DDS_PublicationBuiltinTopicData *to)
{
    c_bool result = OS_C_TRUE;
    (void) base;

    if(result){
        extern c_bool __DDS_BuiltinTopicKey_t__copyIn(c_base, ::DDS::BuiltinTopicKey_t *, _DDS_BuiltinTopicKey_t *);
        result = __DDS_BuiltinTopicKey_t__copyIn(base, &from->key, &to->key);
    }
    if(result){
        extern c_bool __DDS_BuiltinTopicKey_t__copyIn(c_base, ::DDS::BuiltinTopicKey_t *, _DDS_BuiltinTopicKey_t *);
        result = __DDS_BuiltinTopicKey_t__copyIn(base, &from->participant_key, &to->participant_key);
    }
#ifdef OSPL_BOUNDS_CHECK
    if(from->topic_name){
        to->topic_name = c_stringNew(base, from->topic_name);
    } else {
        OS_REPORT (OS_ERROR, "copyIn", 0,"Member 'DDS::PublicationBuiltinTopicData.topic_name' of type 'c_string' is NULL.");
        result = OS_C_FALSE;
    }
#else
    to->topic_name = c_stringNew(base, from->topic_name);
#endif
#ifdef OSPL_BOUNDS_CHECK
    if(from->type_name){
        to->type_name = c_stringNew(base, from->type_name);
    } else {
        OS_REPORT (OS_ERROR, "copyIn", 0,"Member 'DDS::PublicationBuiltinTopicData.type_name' of type 'c_string' is NULL.");
        result = OS_C_FALSE;
    }
#else
    to->type_name = c_stringNew(base, from->type_name);
#endif
    if(result){
        extern c_bool __DDS_DurabilityQosPolicy__copyIn(c_base, ::DDS::DurabilityQosPolicy *, _DDS_DurabilityQosPolicy *);
        result = __DDS_DurabilityQosPolicy__copyIn(base, &from->durability, &to->durability);
    }
    if(result){
        extern c_bool __DDS_DeadlineQosPolicy__copyIn(c_base, ::DDS::DeadlineQosPolicy *, _DDS_DeadlineQosPolicy *);
        result = __DDS_DeadlineQosPolicy__copyIn(base, &from->deadline, &to->deadline);
    }
    if(result){
        extern c_bool __DDS_LatencyBudgetQosPolicy__copyIn(c_base, ::DDS::LatencyBudgetQosPolicy *, _DDS_LatencyBudgetQosPolicy *);
        result = __DDS_LatencyBudgetQosPolicy__copyIn(base, &from->latency_budget, &to->latency_budget);
    }
    if(result){
        extern c_bool __DDS_LivelinessQosPolicy__copyIn(c_base, ::DDS::LivelinessQosPolicy *, _DDS_LivelinessQosPolicy *);
        result = __DDS_LivelinessQosPolicy__copyIn(base, &from->liveliness, &to->liveliness);
    }
    if(result){
        extern c_bool __DDS_ReliabilityQosPolicy__copyIn(c_base, ::DDS::ReliabilityQosPolicy *, _DDS_ReliabilityQosPolicy *);
        result = __DDS_ReliabilityQosPolicy__copyIn(base, &from->reliability, &to->reliability);
    }
    if(result){
        extern c_bool __DDS_LifespanQosPolicy__copyIn(c_base, ::DDS::LifespanQosPolicy *, _DDS_LifespanQosPolicy *);
        result = __DDS_LifespanQosPolicy__copyIn(base, &from->lifespan, &to->lifespan);
    }
    if(result){
        extern c_bool __DDS_DestinationOrderQosPolicy__copyIn(c_base, ::DDS::DestinationOrderQosPolicy *, _DDS_DestinationOrderQosPolicy *);
        result = __DDS_DestinationOrderQosPolicy__copyIn(base, &from->destination_order, &to->destination_order);
    }
    if(result){
        extern c_bool __DDS_UserDataQosPolicy__copyIn(c_base, ::DDS::UserDataQosPolicy *, _DDS_UserDataQosPolicy *);
        result = __DDS_UserDataQosPolicy__copyIn(base, &from->user_data, &to->user_data);
    }
    if(result){
        extern c_bool __DDS_OwnershipQosPolicy__copyIn(c_base, ::DDS::OwnershipQosPolicy *, _DDS_OwnershipQosPolicy *);
        result = __DDS_OwnershipQosPolicy__copyIn(base, &from->ownership, &to->ownership);
    }
    if(result){
        extern c_bool __DDS_OwnershipStrengthQosPolicy__copyIn(c_base, ::DDS::OwnershipStrengthQosPolicy *, _DDS_OwnershipStrengthQosPolicy *);
        result = __DDS_OwnershipStrengthQosPolicy__copyIn(base, &from->ownership_strength, &to->ownership_strength);
    }
    if(result){
        extern c_bool __DDS_PresentationQosPolicy__copyIn(c_base, ::DDS::PresentationQosPolicy *, _DDS_PresentationQosPolicy *);
        result = __DDS_PresentationQosPolicy__copyIn(base, &from->presentation, &to->presentation);
    }
    if(result){
        extern c_bool __DDS_PartitionQosPolicy__copyIn(c_base, ::DDS::PartitionQosPolicy *, _DDS_PartitionQosPolicy *);
        result = __DDS_PartitionQosPolicy__copyIn(base, &from->partition, &to->partition);
    }
    if(result){
        extern c_bool __DDS_TopicDataQosPolicy__copyIn(c_base, ::DDS::TopicDataQosPolicy *, _DDS_TopicDataQosPolicy *);
        result = __DDS_TopicDataQosPolicy__copyIn(base, &from->topic_data, &to->topic_data);
    }
    if(result){
        extern c_bool __DDS_GroupDataQosPolicy__copyIn(c_base, ::DDS::GroupDataQosPolicy *, _DDS_GroupDataQosPolicy *);
        result = __DDS_GroupDataQosPolicy__copyIn(base, &from->group_data, &to->group_data);
    }
    return result;
}

c_bool
__DDS_SubscriptionBuiltinTopicData__copyIn(
    c_base base,
    struct ::DDS::SubscriptionBuiltinTopicData *from,
    struct _DDS_SubscriptionBuiltinTopicData *to)
{
    c_bool result = OS_C_TRUE;
    (void) base;

    if(result){
        extern c_bool __DDS_BuiltinTopicKey_t__copyIn(c_base, ::DDS::BuiltinTopicKey_t *, _DDS_BuiltinTopicKey_t *);
        result = __DDS_BuiltinTopicKey_t__copyIn(base, &from->key, &to->key);
    }
    if(result){
        extern c_bool __DDS_BuiltinTopicKey_t__copyIn(c_base, ::DDS::BuiltinTopicKey_t *, _DDS_BuiltinTopicKey_t *);
        result = __DDS_BuiltinTopicKey_t__copyIn(base, &from->participant_key, &to->participant_key);
    }
#ifdef OSPL_BOUNDS_CHECK
    if(from->topic_name){
        to->topic_name = c_stringNew(base, from->topic_name);
    } else {
        OS_REPORT (OS_ERROR, "copyIn", 0,"Member 'DDS::SubscriptionBuiltinTopicData.topic_name' of type 'c_string' is NULL.");
        result = OS_C_FALSE;
    }
#else
    to->topic_name = c_stringNew(base, from->topic_name);
#endif
#ifdef OSPL_BOUNDS_CHECK
    if(from->type_name){
        to->type_name = c_stringNew(base, from->type_name);
    } else {
        OS_REPORT (OS_ERROR, "copyIn", 0,"Member 'DDS::SubscriptionBuiltinTopicData.type_name' of type 'c_string' is NULL.");
        result = OS_C_FALSE;
    }
#else
    to->type_name = c_stringNew(base, from->type_name);
#endif
    if(result){
        extern c_bool __DDS_DurabilityQosPolicy__copyIn(c_base, ::DDS::DurabilityQosPolicy *, _DDS_DurabilityQosPolicy *);
        result = __DDS_DurabilityQosPolicy__copyIn(base, &from->durability, &to->durability);
    }
    if(result){
        extern c_bool __DDS_DeadlineQosPolicy__copyIn(c_base, ::DDS::DeadlineQosPolicy *, _DDS_DeadlineQosPolicy *);
        result = __DDS_DeadlineQosPolicy__copyIn(base, &from->deadline, &to->deadline);
    }
    if(result){
        extern c_bool __DDS_LatencyBudgetQosPolicy__copyIn(c_base, ::DDS::LatencyBudgetQosPolicy *, _DDS_LatencyBudgetQosPolicy *);
        result = __DDS_LatencyBudgetQosPolicy__copyIn(base, &from->latency_budget, &to->latency_budget);
    }
    if(result){
        extern c_bool __DDS_LivelinessQosPolicy__copyIn(c_base, ::DDS::LivelinessQosPolicy *, _DDS_LivelinessQosPolicy *);
        result = __DDS_LivelinessQosPolicy__copyIn(base, &from->liveliness, &to->liveliness);
    }
    if(result){
        extern c_bool __DDS_ReliabilityQosPolicy__copyIn(c_base, ::DDS::ReliabilityQosPolicy *, _DDS_ReliabilityQosPolicy *);
        result = __DDS_ReliabilityQosPolicy__copyIn(base, &from->reliability, &to->reliability);
    }
    if(result){
        extern c_bool __DDS_OwnershipQosPolicy__copyIn(c_base, ::DDS::OwnershipQosPolicy *, _DDS_OwnershipQosPolicy *);
        result = __DDS_OwnershipQosPolicy__copyIn(base, &from->ownership, &to->ownership);
    }
    if(result){
        extern c_bool __DDS_DestinationOrderQosPolicy__copyIn(c_base, ::DDS::DestinationOrderQosPolicy *, _DDS_DestinationOrderQosPolicy *);
        result = __DDS_DestinationOrderQosPolicy__copyIn(base, &from->destination_order, &to->destination_order);
    }
    if(result){
        extern c_bool __DDS_UserDataQosPolicy__copyIn(c_base, ::DDS::UserDataQosPolicy *, _DDS_UserDataQosPolicy *);
        result = __DDS_UserDataQosPolicy__copyIn(base, &from->user_data, &to->user_data);
    }
    if(result){
        extern c_bool __DDS_TimeBasedFilterQosPolicy__copyIn(c_base, ::DDS::TimeBasedFilterQosPolicy *, _DDS_TimeBasedFilterQosPolicy *);
        result = __DDS_TimeBasedFilterQosPolicy__copyIn(base, &from->time_based_filter, &to->time_based_filter);
    }
    if(result){
        extern c_bool __DDS_PresentationQosPolicy__copyIn(c_base, ::DDS::PresentationQosPolicy *, _DDS_PresentationQosPolicy *);
        result = __DDS_PresentationQosPolicy__copyIn(base, &from->presentation, &to->presentation);
    }
    if(result){
        extern c_bool __DDS_PartitionQosPolicy__copyIn(c_base, ::DDS::PartitionQosPolicy *, _DDS_PartitionQosPolicy *);
        result = __DDS_PartitionQosPolicy__copyIn(base, &from->partition, &to->partition);
    }
    if(result){
        extern c_bool __DDS_TopicDataQosPolicy__copyIn(c_base, ::DDS::TopicDataQosPolicy *, _DDS_TopicDataQosPolicy *);
        result = __DDS_TopicDataQosPolicy__copyIn(base, &from->topic_data, &to->topic_data);
    }
    if(result){
        extern c_bool __DDS_GroupDataQosPolicy__copyIn(c_base, ::DDS::GroupDataQosPolicy *, _DDS_GroupDataQosPolicy *);
        result = __DDS_GroupDataQosPolicy__copyIn(base, &from->group_data, &to->group_data);
    }
    return result;
}

void
__DDS_octSeq__copyOut(
    void *_from,
    void *_to)
{
    _DDS_octSeq *from = (_DDS_octSeq *)_from;
    ::DDS::octSeq *to = (::DDS::octSeq *)_to;
    long size0;
    c_octet *src0 = (c_octet *)(*from);

    size0 = c_arraySize(c_sequence(src0));
    (*to).length(size0);
    {
        c_octet *buf0;
        buf0 = (c_octet *)(*to).get_buffer();
        memcpy (buf0,src0,size0* sizeof(*buf0));
    }
}

void
__DDS_BuiltinTopicKey_t__copyOut(
    void *_from,
    void *_to)
{
    _DDS_BuiltinTopicKey_t *from = (_DDS_BuiltinTopicKey_t *)_from;
    ::DDS::BuiltinTopicKey_t *to = (::DDS::BuiltinTopicKey_t *)_to;
    memcpy (*to, from, sizeof (*from));
}

void
__DDS_StringSeq__copyOut(
    void *_from,
    void *_to)
{
    _DDS_StringSeq *from = (_DDS_StringSeq *)_from;
    ::DDS::StringSeq *to = (::DDS::StringSeq *)_to;
    long size0;
    c_string *src0 = (c_string *)(*from);

    size0 = c_arraySize(c_sequence(src0));
    (*to).length(size0);
    {
        long i0;
        for (i0 = 0; i0 < size0; i0++) {
            (*to)[i0] = DDS::string_dup(src0[i0]);
        }
    }
}

void
__DDS_Duration_t__copyOut(
    void *_from,
    void *_to)
{
    struct _DDS_Duration_t *from = (struct _DDS_Duration_t *)_from;
    struct ::DDS::Duration_t *to = (struct ::DDS::Duration_t *)_to;
    to->sec = (::DDS::Long)from->sec;
    to->nanosec = (::DDS::ULong)from->nanosec;
}

void
__DDS_UserDataQosPolicy__copyOut(
    void *_from,
    void *_to)
{
    struct _DDS_UserDataQosPolicy *from = (struct _DDS_UserDataQosPolicy *)_from;
    struct ::DDS::UserDataQosPolicy *to = (struct ::DDS::UserDataQosPolicy *)_to;
    {
        extern void __DDS_octSeq__copyOut(void *, void *);
        __DDS_octSeq__copyOut((void *)&from->value, (void *)&to->value);
    }
}

void
__DDS_TopicDataQosPolicy__copyOut(
    void *_from,
    void *_to)
{
    struct _DDS_TopicDataQosPolicy *from = (struct _DDS_TopicDataQosPolicy *)_from;
    struct ::DDS::TopicDataQosPolicy *to = (struct ::DDS::TopicDataQosPolicy *)_to;
    {
        extern void __DDS_octSeq__copyOut(void *, void *);
        __DDS_octSeq__copyOut((void *)&from->value, (void *)&to->value);
    }
}

void
__DDS_GroupDataQosPolicy__copyOut(
    void *_from,
    void *_to)
{
    struct _DDS_GroupDataQosPolicy *from = (struct _DDS_GroupDataQosPolicy *)_from;
    struct ::DDS::GroupDataQosPolicy *to = (struct ::DDS::GroupDataQosPolicy *)_to;
    {
        extern void __DDS_octSeq__copyOut(void *, void *);
        __DDS_octSeq__copyOut((void *)&from->value, (void *)&to->value);
    }
}

void
__DDS_TransportPriorityQosPolicy__copyOut(
    void *_from,
    void *_to)
{
    struct _DDS_TransportPriorityQosPolicy *from = (struct _DDS_TransportPriorityQosPolicy *)_from;
    struct ::DDS::TransportPriorityQosPolicy *to = (struct ::DDS::TransportPriorityQosPolicy *)_to;
    to->value = (::DDS::Long)from->value;
}

void
__DDS_LifespanQosPolicy__copyOut(
    void *_from,
    void *_to)
{
    struct _DDS_LifespanQosPolicy *from = (struct _DDS_LifespanQosPolicy *)_from;
    struct ::DDS::LifespanQosPolicy *to = (struct ::DDS::LifespanQosPolicy *)_to;
    {
        extern void __DDS_Duration_t__copyOut(void *, void *);
        __DDS_Duration_t__copyOut((void *)&from->duration, (void *)&to->duration);
    }
}

void
__DDS_DurabilityQosPolicy__copyOut(
    void *_from,
    void *_to)
{
    struct _DDS_DurabilityQosPolicy *from = (struct _DDS_DurabilityQosPolicy *)_from;
    struct ::DDS::DurabilityQosPolicy *to = (struct ::DDS::DurabilityQosPolicy *)_to;
    to->kind = (::DDS::DurabilityQosPolicyKind)from->kind;
}

void
__DDS_PresentationQosPolicy__copyOut(
    void *_from,
    void *_to)
{
    struct _DDS_PresentationQosPolicy *from = (struct _DDS_PresentationQosPolicy *)_from;
    struct ::DDS::PresentationQosPolicy *to = (struct ::DDS::PresentationQosPolicy *)_to;
    to->access_scope = (::DDS::PresentationQosPolicyAccessScopeKind)from->access_scope;
    to->coherent_access = (::DDS::Boolean)(from->coherent_access != 0);
    to->ordered_access = (::DDS::Boolean)(from->ordered_access != 0);
}

void
__DDS_DeadlineQosPolicy__copyOut(
    void *_from,
    void *_to)
{
    struct _DDS_DeadlineQosPolicy *from = (struct _DDS_DeadlineQosPolicy *)_from;
    struct ::DDS::DeadlineQosPolicy *to = (struct ::DDS::DeadlineQosPolicy *)_to;
    {
        extern void __DDS_Duration_t__copyOut(void *, void *);
        __DDS_Duration_t__copyOut((void *)&from->period, (void *)&to->period);
    }
}

void
__DDS_LatencyBudgetQosPolicy__copyOut(
    void *_from,
    void *_to)
{
    struct _DDS_LatencyBudgetQosPolicy *from = (struct _DDS_LatencyBudgetQosPolicy *)_from;
    struct ::DDS::LatencyBudgetQosPolicy *to = (struct ::DDS::LatencyBudgetQosPolicy *)_to;
    {
        extern void __DDS_Duration_t__copyOut(void *, void *);
        __DDS_Duration_t__copyOut((void *)&from->duration, (void *)&to->duration);
    }
}

void
__DDS_OwnershipQosPolicy__copyOut(
    void *_from,
    void *_to)
{
    struct _DDS_OwnershipQosPolicy *from = (struct _DDS_OwnershipQosPolicy *)_from;
    struct ::DDS::OwnershipQosPolicy *to = (struct ::DDS::OwnershipQosPolicy *)_to;
    to->kind = (::DDS::OwnershipQosPolicyKind)from->kind;
}

void
__DDS_OwnershipStrengthQosPolicy__copyOut(
    void *_from,
    void *_to)
{
    struct _DDS_OwnershipStrengthQosPolicy *from = (struct _DDS_OwnershipStrengthQosPolicy *)_from;
    struct ::DDS::OwnershipStrengthQosPolicy *to = (struct ::DDS::OwnershipStrengthQosPolicy *)_to;
    to->value = (::DDS::Long)from->value;
}

void
__DDS_LivelinessQosPolicy__copyOut(
    void *_from,
    void *_to)
{
    struct _DDS_LivelinessQosPolicy *from = (struct _DDS_LivelinessQosPolicy *)_from;
    struct ::DDS::LivelinessQosPolicy *to = (struct ::DDS::LivelinessQosPolicy *)_to;
    to->kind = (::DDS::LivelinessQosPolicyKind)from->kind;
    {
        extern void __DDS_Duration_t__copyOut(void *, void *);
        __DDS_Duration_t__copyOut((void *)&from->lease_duration, (void *)&to->lease_duration);
    }
}

void
__DDS_TimeBasedFilterQosPolicy__copyOut(
    void *_from,
    void *_to)
{
    struct _DDS_TimeBasedFilterQosPolicy *from = (struct _DDS_TimeBasedFilterQosPolicy *)_from;
    struct ::DDS::TimeBasedFilterQosPolicy *to = (struct ::DDS::TimeBasedFilterQosPolicy *)_to;
    {
        extern void __DDS_Duration_t__copyOut(void *, void *);
        __DDS_Duration_t__copyOut((void *)&from->minimum_separation, (void *)&to->minimum_separation);
    }
}

void
__DDS_PartitionQosPolicy__copyOut(
    void *_from,
    void *_to)
{
    struct _DDS_PartitionQosPolicy *from = (struct _DDS_PartitionQosPolicy *)_from;
    struct ::DDS::PartitionQosPolicy *to = (struct ::DDS::PartitionQosPolicy *)_to;
    {
        extern void __DDS_StringSeq__copyOut(void *, void *);
        __DDS_StringSeq__copyOut((void *)&from->name, (void *)&to->name);
    }
}

void
__DDS_ReliabilityQosPolicy__copyOut(
    void *_from,
    void *_to)
{
    struct _DDS_ReliabilityQosPolicy *from = (struct _DDS_ReliabilityQosPolicy *)_from;
    struct ::DDS::ReliabilityQosPolicy *to = (struct ::DDS::ReliabilityQosPolicy *)_to;
    to->kind = (::DDS::ReliabilityQosPolicyKind)from->kind;
    {
        extern void __DDS_Duration_t__copyOut(void *, void *);
        __DDS_Duration_t__copyOut((void *)&from->max_blocking_time, (void *)&to->max_blocking_time);
    }
    to->synchronous = (::DDS::Boolean)(from->synchronous != 0);
}

void
__DDS_DestinationOrderQosPolicy__copyOut(
    void *_from,
    void *_to)
{
    struct _DDS_DestinationOrderQosPolicy *from = (struct _DDS_DestinationOrderQosPolicy *)_from;
    struct ::DDS::DestinationOrderQosPolicy *to = (struct ::DDS::DestinationOrderQosPolicy *)_to;
    to->kind = (::DDS::DestinationOrderQosPolicyKind)from->kind;
}

void
__DDS_HistoryQosPolicy__copyOut(
    void *_from,
    void *_to)
{
    struct _DDS_HistoryQosPolicy *from = (struct _DDS_HistoryQosPolicy *)_from;
    struct ::DDS::HistoryQosPolicy *to = (struct ::DDS::HistoryQosPolicy *)_to;
    to->kind = (::DDS::HistoryQosPolicyKind)from->kind;
    to->depth = (::DDS::Long)from->depth;
}

void
__DDS_ResourceLimitsQosPolicy__copyOut(
    void *_from,
    void *_to)
{
    struct _DDS_ResourceLimitsQosPolicy *from = (struct _DDS_ResourceLimitsQosPolicy *)_from;
    struct ::DDS::ResourceLimitsQosPolicy *to = (struct ::DDS::ResourceLimitsQosPolicy *)_to;
    to->max_samples = (::DDS::Long)from->max_samples;
    to->max_instances = (::DDS::Long)from->max_instances;
    to->max_samples_per_instance = (::DDS::Long)from->max_samples_per_instance;
}

void
__DDS_DurabilityServiceQosPolicy__copyOut(
    void *_from,
    void *_to)
{
    struct _DDS_DurabilityServiceQosPolicy *from = (struct _DDS_DurabilityServiceQosPolicy *)_from;
    struct ::DDS::DurabilityServiceQosPolicy *to = (struct ::DDS::DurabilityServiceQosPolicy *)_to;
    {
        extern void __DDS_Duration_t__copyOut(void *, void *);
        __DDS_Duration_t__copyOut((void *)&from->service_cleanup_delay, (void *)&to->service_cleanup_delay);
    }
    to->history_kind = (::DDS::HistoryQosPolicyKind)from->history_kind;
    to->history_depth = (::DDS::Long)from->history_depth;
    to->max_samples = (::DDS::Long)from->max_samples;
    to->max_instances = (::DDS::Long)from->max_instances;
    to->max_samples_per_instance = (::DDS::Long)from->max_samples_per_instance;
}

void
__DDS_ParticipantBuiltinTopicData__copyOut(
    void *_from,
    void *_to)
{
    struct _DDS_ParticipantBuiltinTopicData *from = (struct _DDS_ParticipantBuiltinTopicData *)_from;
    struct ::DDS::ParticipantBuiltinTopicData *to = (struct ::DDS::ParticipantBuiltinTopicData *)_to;
    {
        extern void __DDS_BuiltinTopicKey_t__copyOut(void *, void *);
        __DDS_BuiltinTopicKey_t__copyOut((void *)&from->key, (void *)&to->key);
    }
    {
        extern void __DDS_UserDataQosPolicy__copyOut(void *, void *);
        __DDS_UserDataQosPolicy__copyOut((void *)&from->user_data, (void *)&to->user_data);
    }
}

void
__DDS_TopicBuiltinTopicData__copyOut(
    void *_from,
    void *_to)
{
    struct _DDS_TopicBuiltinTopicData *from = (struct _DDS_TopicBuiltinTopicData *)_from;
    struct ::DDS::TopicBuiltinTopicData *to = (struct ::DDS::TopicBuiltinTopicData *)_to;
    {
        extern void __DDS_BuiltinTopicKey_t__copyOut(void *, void *);
        __DDS_BuiltinTopicKey_t__copyOut((void *)&from->key, (void *)&to->key);
    }
    to->name = DDS::string_dup(from->name ? from->name : "");
    to->type_name = DDS::string_dup(from->type_name ? from->type_name : "");
    {
        extern void __DDS_DurabilityQosPolicy__copyOut(void *, void *);
        __DDS_DurabilityQosPolicy__copyOut((void *)&from->durability, (void *)&to->durability);
    }
    {
        extern void __DDS_DurabilityServiceQosPolicy__copyOut(void *, void *);
        __DDS_DurabilityServiceQosPolicy__copyOut((void *)&from->durability_service, (void *)&to->durability_service);
    }
    {
        extern void __DDS_DeadlineQosPolicy__copyOut(void *, void *);
        __DDS_DeadlineQosPolicy__copyOut((void *)&from->deadline, (void *)&to->deadline);
    }
    {
        extern void __DDS_LatencyBudgetQosPolicy__copyOut(void *, void *);
        __DDS_LatencyBudgetQosPolicy__copyOut((void *)&from->latency_budget, (void *)&to->latency_budget);
    }
    {
        extern void __DDS_LivelinessQosPolicy__copyOut(void *, void *);
        __DDS_LivelinessQosPolicy__copyOut((void *)&from->liveliness, (void *)&to->liveliness);
    }
    {
        extern void __DDS_ReliabilityQosPolicy__copyOut(void *, void *);
        __DDS_ReliabilityQosPolicy__copyOut((void *)&from->reliability, (void *)&to->reliability);
    }
    {
        extern void __DDS_TransportPriorityQosPolicy__copyOut(void *, void *);
        __DDS_TransportPriorityQosPolicy__copyOut((void *)&from->transport_priority, (void *)&to->transport_priority);
    }
    {
        extern void __DDS_LifespanQosPolicy__copyOut(void *, void *);
        __DDS_LifespanQosPolicy__copyOut((void *)&from->lifespan, (void *)&to->lifespan);
    }
    {
        extern void __DDS_DestinationOrderQosPolicy__copyOut(void *, void *);
        __DDS_DestinationOrderQosPolicy__copyOut((void *)&from->destination_order, (void *)&to->destination_order);
    }
    {
        extern void __DDS_HistoryQosPolicy__copyOut(void *, void *);
        __DDS_HistoryQosPolicy__copyOut((void *)&from->history, (void *)&to->history);
    }
    {
        extern void __DDS_ResourceLimitsQosPolicy__copyOut(void *, void *);
        __DDS_ResourceLimitsQosPolicy__copyOut((void *)&from->resource_limits, (void *)&to->resource_limits);
    }
    {
        extern void __DDS_OwnershipQosPolicy__copyOut(void *, void *);
        __DDS_OwnershipQosPolicy__copyOut((void *)&from->ownership, (void *)&to->ownership);
    }
    {
        extern void __DDS_TopicDataQosPolicy__copyOut(void *, void *);
        __DDS_TopicDataQosPolicy__copyOut((void *)&from->topic_data, (void *)&to->topic_data);
    }
}

void
__DDS_PublicationBuiltinTopicData__copyOut(
    void *_from,
    void *_to)
{
    struct _DDS_PublicationBuiltinTopicData *from = (struct _DDS_PublicationBuiltinTopicData *)_from;
    struct ::DDS::PublicationBuiltinTopicData *to = (struct ::DDS::PublicationBuiltinTopicData *)_to;
    {
        extern void __DDS_BuiltinTopicKey_t__copyOut(void *, void *);
        __DDS_BuiltinTopicKey_t__copyOut((void *)&from->key, (void *)&to->key);
    }
    {
        extern void __DDS_BuiltinTopicKey_t__copyOut(void *, void *);
        __DDS_BuiltinTopicKey_t__copyOut((void *)&from->participant_key, (void *)&to->participant_key);
    }
    to->topic_name = DDS::string_dup(from->topic_name ? from->topic_name : "");
    to->type_name = DDS::string_dup(from->type_name ? from->type_name : "");
    {
        extern void __DDS_DurabilityQosPolicy__copyOut(void *, void *);
        __DDS_DurabilityQosPolicy__copyOut((void *)&from->durability, (void *)&to->durability);
    }
    {
        extern void __DDS_DeadlineQosPolicy__copyOut(void *, void *);
        __DDS_DeadlineQosPolicy__copyOut((void *)&from->deadline, (void *)&to->deadline);
    }
    {
        extern void __DDS_LatencyBudgetQosPolicy__copyOut(void *, void *);
        __DDS_LatencyBudgetQosPolicy__copyOut((void *)&from->latency_budget, (void *)&to->latency_budget);
    }
    {
        extern void __DDS_LivelinessQosPolicy__copyOut(void *, void *);
        __DDS_LivelinessQosPolicy__copyOut((void *)&from->liveliness, (void *)&to->liveliness);
    }
    {
        extern void __DDS_ReliabilityQosPolicy__copyOut(void *, void *);
        __DDS_ReliabilityQosPolicy__copyOut((void *)&from->reliability, (void *)&to->reliability);
    }
    {
        extern void __DDS_LifespanQosPolicy__copyOut(void *, void *);
        __DDS_LifespanQosPolicy__copyOut((void *)&from->lifespan, (void *)&to->lifespan);
    }
    {
        extern void __DDS_DestinationOrderQosPolicy__copyOut(void *, void *);
        __DDS_DestinationOrderQosPolicy__copyOut((void *)&from->destination_order, (void *)&to->destination_order);
    }
    {
        extern void __DDS_UserDataQosPolicy__copyOut(void *, void *);
        __DDS_UserDataQosPolicy__copyOut((void *)&from->user_data, (void *)&to->user_data);
    }
    {
        extern void __DDS_OwnershipQosPolicy__copyOut(void *, void *);
        __DDS_OwnershipQosPolicy__copyOut((void *)&from->ownership, (void *)&to->ownership);
    }
    {
        extern void __DDS_OwnershipStrengthQosPolicy__copyOut(void *, void *);
        __DDS_OwnershipStrengthQosPolicy__copyOut((void *)&from->ownership_strength, (void *)&to->ownership_strength);
    }
    {
        extern void __DDS_PresentationQosPolicy__copyOut(void *, void *);
        __DDS_PresentationQosPolicy__copyOut((void *)&from->presentation, (void *)&to->presentation);
    }
    {
        extern void __DDS_PartitionQosPolicy__copyOut(void *, void *);
        __DDS_PartitionQosPolicy__copyOut((void *)&from->partition, (void *)&to->partition);
    }
    {
        extern void __DDS_TopicDataQosPolicy__copyOut(void *, void *);
        __DDS_TopicDataQosPolicy__copyOut((void *)&from->topic_data, (void *)&to->topic_data);
    }
    {
        extern void __DDS_GroupDataQosPolicy__copyOut(void *, void *);
        __DDS_GroupDataQosPolicy__copyOut((void *)&from->group_data, (void *)&to->group_data);
    }
}

void
__DDS_SubscriptionBuiltinTopicData__copyOut(
    void *_from,
    void *_to)
{
    struct _DDS_SubscriptionBuiltinTopicData *from = (struct _DDS_SubscriptionBuiltinTopicData *)_from;
    struct ::DDS::SubscriptionBuiltinTopicData *to = (struct ::DDS::SubscriptionBuiltinTopicData *)_to;
    {
        extern void __DDS_BuiltinTopicKey_t__copyOut(void *, void *);
        __DDS_BuiltinTopicKey_t__copyOut((void *)&from->key, (void *)&to->key);
    }
    {
        extern void __DDS_BuiltinTopicKey_t__copyOut(void *, void *);
        __DDS_BuiltinTopicKey_t__copyOut((void *)&from->participant_key, (void *)&to->participant_key);
    }
    to->topic_name = DDS::string_dup(from->topic_name ? from->topic_name : "");
    to->type_name = DDS::string_dup(from->type_name ? from->type_name : "");
    {
        extern void __DDS_DurabilityQosPolicy__copyOut(void *, void *);
        __DDS_DurabilityQosPolicy__copyOut((void *)&from->durability, (void *)&to->durability);
    }
    {
        extern void __DDS_DeadlineQosPolicy__copyOut(void *, void *);
        __DDS_DeadlineQosPolicy__copyOut((void *)&from->deadline, (void *)&to->deadline);
    }
    {
        extern void __DDS_LatencyBudgetQosPolicy__copyOut(void *, void *);
        __DDS_LatencyBudgetQosPolicy__copyOut((void *)&from->latency_budget, (void *)&to->latency_budget);
    }
    {
        extern void __DDS_LivelinessQosPolicy__copyOut(void *, void *);
        __DDS_LivelinessQosPolicy__copyOut((void *)&from->liveliness, (void *)&to->liveliness);
    }
    {
        extern void __DDS_ReliabilityQosPolicy__copyOut(void *, void *);
        __DDS_ReliabilityQosPolicy__copyOut((void *)&from->reliability, (void *)&to->reliability);
    }
    {
        extern void __DDS_OwnershipQosPolicy__copyOut(void *, void *);
        __DDS_OwnershipQosPolicy__copyOut((void *)&from->ownership, (void *)&to->ownership);
    }
    {
        extern void __DDS_DestinationOrderQosPolicy__copyOut(void *, void *);
        __DDS_DestinationOrderQosPolicy__copyOut((void *)&from->destination_order, (void *)&to->destination_order);
    }
    {
        extern void __DDS_UserDataQosPolicy__copyOut(void *, void *);
        __DDS_UserDataQosPolicy__copyOut((void *)&from->user_data, (void *)&to->user_data);
    }
    {
        extern void __DDS_TimeBasedFilterQosPolicy__copyOut(void *, void *);
        __DDS_TimeBasedFilterQosPolicy__copyOut((void *)&from->time_based_filter, (void *)&to->time_based_filter);
    }
    {
        extern void __DDS_PresentationQosPolicy__copyOut(void *, void *);
        __DDS_PresentationQosPolicy__copyOut((void *)&from->presentation, (void *)&to->presentation);
    }
    {
        extern void __DDS_PartitionQosPolicy__copyOut(void *, void *);
        __DDS_PartitionQosPolicy__copyOut((void *)&from->partition, (void *)&to->partition);
    }
    {
        extern void __DDS_TopicDataQosPolicy__copyOut(void *, void *);
        __DDS_TopicDataQosPolicy__copyOut((void *)&from->topic_data, (void *)&to->topic_data);
    }
    {
        extern void __DDS_GroupDataQosPolicy__copyOut(void *, void *);
        __DDS_GroupDataQosPolicy__copyOut((void *)&from->group_data, (void *)&to->group_data);
    }
}

