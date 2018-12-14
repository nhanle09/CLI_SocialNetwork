#include "dds_dcps_builtintopicsSplDcps.h"
#include "ccpp_dds_dcps_builtintopics.h"
#include "dds_type_aliases.h"

const char *
__DDS_Time_t__name(void)
{
    return (const char*)"DDS::Time_t";
}

const char *
__DDS_Time_t__keys(void)
{
    return (const char*)"";
}

const char *
__DDS_EntityFactoryQosPolicy__name(void)
{
    return (const char*)"DDS::EntityFactoryQosPolicy";
}

const char *
__DDS_EntityFactoryQosPolicy__keys(void)
{
    return (const char*)"";
}

const char *
__DDS_WriterDataLifecycleQosPolicy__name(void)
{
    return (const char*)"DDS::WriterDataLifecycleQosPolicy";
}

const char *
__DDS_WriterDataLifecycleQosPolicy__keys(void)
{
    return (const char*)"";
}

const char *
__DDS_InvalidSampleVisibilityQosPolicy__name(void)
{
    return (const char*)"DDS::InvalidSampleVisibilityQosPolicy";
}

const char *
__DDS_InvalidSampleVisibilityQosPolicy__keys(void)
{
    return (const char*)"";
}

const char *
__DDS_ReaderDataLifecycleQosPolicy__name(void)
{
    return (const char*)"DDS::ReaderDataLifecycleQosPolicy";
}

const char *
__DDS_ReaderDataLifecycleQosPolicy__keys(void)
{
    return (const char*)"";
}

const char *
__DDS_SubscriptionKeyQosPolicy__name(void)
{
    return (const char*)"DDS::SubscriptionKeyQosPolicy";
}

const char *
__DDS_SubscriptionKeyQosPolicy__keys(void)
{
    return (const char*)"";
}

const char *
__DDS_ReaderLifespanQosPolicy__name(void)
{
    return (const char*)"DDS::ReaderLifespanQosPolicy";
}

const char *
__DDS_ReaderLifespanQosPolicy__keys(void)
{
    return (const char*)"";
}

const char *
__DDS_ShareQosPolicy__name(void)
{
    return (const char*)"DDS::ShareQosPolicy";
}

const char *
__DDS_ShareQosPolicy__keys(void)
{
    return (const char*)"";
}

const char *
__DDS_SchedulingClassQosPolicy__name(void)
{
    return (const char*)"DDS::SchedulingClassQosPolicy";
}

const char *
__DDS_SchedulingClassQosPolicy__keys(void)
{
    return (const char*)"";
}

const char *
__DDS_SchedulingPriorityQosPolicy__name(void)
{
    return (const char*)"DDS::SchedulingPriorityQosPolicy";
}

const char *
__DDS_SchedulingPriorityQosPolicy__keys(void)
{
    return (const char*)"";
}

const char *
__DDS_SchedulingQosPolicy__name(void)
{
    return (const char*)"DDS::SchedulingQosPolicy";
}

const char *
__DDS_SchedulingQosPolicy__keys(void)
{
    return (const char*)"";
}

const char *
__DDS_ViewKeyQosPolicy__name(void)
{
    return (const char*)"DDS::ViewKeyQosPolicy";
}

const char *
__DDS_ViewKeyQosPolicy__keys(void)
{
    return (const char*)"";
}

const char *
__DDS_DataReaderViewQos__name(void)
{
    return (const char*)"DDS::DataReaderViewQos";
}

const char *
__DDS_DataReaderViewQos__keys(void)
{
    return (const char*)"";
}

const char *
__DDS_DomainParticipantFactoryQos__name(void)
{
    return (const char*)"DDS::DomainParticipantFactoryQos";
}

const char *
__DDS_DomainParticipantFactoryQos__keys(void)
{
    return (const char*)"";
}

const char *
__DDS_DomainParticipantQos__name(void)
{
    return (const char*)"DDS::DomainParticipantQos";
}

const char *
__DDS_DomainParticipantQos__keys(void)
{
    return (const char*)"";
}

const char *
__DDS_TopicQos__name(void)
{
    return (const char*)"DDS::TopicQos";
}

const char *
__DDS_TopicQos__keys(void)
{
    return (const char*)"";
}

const char *
__DDS_DataWriterQos__name(void)
{
    return (const char*)"DDS::DataWriterQos";
}

const char *
__DDS_DataWriterQos__keys(void)
{
    return (const char*)"";
}

const char *
__DDS_PublisherQos__name(void)
{
    return (const char*)"DDS::PublisherQos";
}

const char *
__DDS_PublisherQos__keys(void)
{
    return (const char*)"";
}

const char *
__DDS_DataReaderQos__name(void)
{
    return (const char*)"DDS::DataReaderQos";
}

const char *
__DDS_DataReaderQos__keys(void)
{
    return (const char*)"";
}

const char *
__DDS_SubscriberQos__name(void)
{
    return (const char*)"DDS::SubscriberQos";
}

const char *
__DDS_SubscriberQos__keys(void)
{
    return (const char*)"";
}

#include <v_kernel.h>
#include <v_topic.h>
#include <os_stdlib.h>
#include <string.h>
#include <os_report.h>

c_bool
__DDS_Time_t__copyIn(
    c_base base,
    struct ::DDS::Time_t *from,
    struct _DDS_Time_t *to)
{
    c_bool result = OS_C_TRUE;
    (void) base;

    to->sec = (c_long)from->sec;
    to->nanosec = (c_ulong)from->nanosec;
    return result;
}

c_bool
__DDS_EntityFactoryQosPolicy__copyIn(
    c_base base,
    struct ::DDS::EntityFactoryQosPolicy *from,
    struct _DDS_EntityFactoryQosPolicy *to)
{
    c_bool result = OS_C_TRUE;
    (void) base;

    to->autoenable_created_entities = (c_bool)from->autoenable_created_entities;
    return result;
}

c_bool
__DDS_WriterDataLifecycleQosPolicy__copyIn(
    c_base base,
    struct ::DDS::WriterDataLifecycleQosPolicy *from,
    struct _DDS_WriterDataLifecycleQosPolicy *to)
{
    c_bool result = OS_C_TRUE;
    (void) base;

    to->autodispose_unregistered_instances = (c_bool)from->autodispose_unregistered_instances;
    if(result){
        extern c_bool __DDS_Duration_t__copyIn(c_base, ::DDS::Duration_t *, _DDS_Duration_t *);
        result = __DDS_Duration_t__copyIn(base, &from->autopurge_suspended_samples_delay, &to->autopurge_suspended_samples_delay);
    }
    if(result){
        extern c_bool __DDS_Duration_t__copyIn(c_base, ::DDS::Duration_t *, _DDS_Duration_t *);
        result = __DDS_Duration_t__copyIn(base, &from->autounregister_instance_delay, &to->autounregister_instance_delay);
    }
    return result;
}

c_bool
__DDS_InvalidSampleVisibilityQosPolicy__copyIn(
    c_base base,
    struct ::DDS::InvalidSampleVisibilityQosPolicy *from,
    struct _DDS_InvalidSampleVisibilityQosPolicy *to)
{
    c_bool result = OS_C_TRUE;
    (void) base;

#ifdef OSPL_BOUNDS_CHECK
    if((((c_long)from->kind) >= 0) && (((c_long)from->kind) < 3) ){
        to->kind = (enum _DDS_InvalidSampleVisibilityQosPolicyKind)from->kind;
    } else {
        OS_REPORT (OS_ERROR, "copyIn", 0,"Member 'DDS::InvalidSampleVisibilityQosPolicy.kind' of type 'InvalidSampleVisibilityQosPolicyKind' is out of range.");
        result = OS_C_FALSE;
    }
#else
    to->kind = (enum _DDS_InvalidSampleVisibilityQosPolicyKind)from->kind;
#endif
    return result;
}

c_bool
__DDS_ReaderDataLifecycleQosPolicy__copyIn(
    c_base base,
    struct ::DDS::ReaderDataLifecycleQosPolicy *from,
    struct _DDS_ReaderDataLifecycleQosPolicy *to)
{
    c_bool result = OS_C_TRUE;
    (void) base;

    if(result){
        extern c_bool __DDS_Duration_t__copyIn(c_base, ::DDS::Duration_t *, _DDS_Duration_t *);
        result = __DDS_Duration_t__copyIn(base, &from->autopurge_nowriter_samples_delay, &to->autopurge_nowriter_samples_delay);
    }
    if(result){
        extern c_bool __DDS_Duration_t__copyIn(c_base, ::DDS::Duration_t *, _DDS_Duration_t *);
        result = __DDS_Duration_t__copyIn(base, &from->autopurge_disposed_samples_delay, &to->autopurge_disposed_samples_delay);
    }
    to->enable_invalid_samples = (c_bool)from->enable_invalid_samples;
    if(result){
        extern c_bool __DDS_InvalidSampleVisibilityQosPolicy__copyIn(c_base, ::DDS::InvalidSampleVisibilityQosPolicy *, _DDS_InvalidSampleVisibilityQosPolicy *);
        result = __DDS_InvalidSampleVisibilityQosPolicy__copyIn(base, &from->invalid_sample_visibility, &to->invalid_sample_visibility);
    }
    return result;
}

c_bool
__DDS_SubscriptionKeyQosPolicy__copyIn(
    c_base base,
    struct ::DDS::SubscriptionKeyQosPolicy *from,
    struct _DDS_SubscriptionKeyQosPolicy *to)
{
    c_bool result = OS_C_TRUE;
    (void) base;

    to->use_key_list = (c_bool)from->use_key_list;
    if(result){
        extern c_bool __DDS_StringSeq__copyIn(c_base, ::DDS::StringSeq *, _DDS_StringSeq *);
        result = __DDS_StringSeq__copyIn(base, &from->key_list, &to->key_list);
    }
    return result;
}

c_bool
__DDS_ReaderLifespanQosPolicy__copyIn(
    c_base base,
    struct ::DDS::ReaderLifespanQosPolicy *from,
    struct _DDS_ReaderLifespanQosPolicy *to)
{
    c_bool result = OS_C_TRUE;
    (void) base;

    to->use_lifespan = (c_bool)from->use_lifespan;
    if(result){
        extern c_bool __DDS_Duration_t__copyIn(c_base, ::DDS::Duration_t *, _DDS_Duration_t *);
        result = __DDS_Duration_t__copyIn(base, &from->duration, &to->duration);
    }
    return result;
}

c_bool
__DDS_ShareQosPolicy__copyIn(
    c_base base,
    struct ::DDS::ShareQosPolicy *from,
    struct _DDS_ShareQosPolicy *to)
{
    c_bool result = OS_C_TRUE;
    (void) base;

#ifdef OSPL_BOUNDS_CHECK
    if(from->name){
        to->name = c_stringNew(base, from->name);
    } else {
        OS_REPORT (OS_ERROR, "copyIn", 0,"Member 'DDS::ShareQosPolicy.name' of type 'c_string' is NULL.");
        result = OS_C_FALSE;
    }
#else
    to->name = c_stringNew(base, from->name);
#endif
    to->enable = (c_bool)from->enable;
    return result;
}

c_bool
__DDS_SchedulingClassQosPolicy__copyIn(
    c_base base,
    struct ::DDS::SchedulingClassQosPolicy *from,
    struct _DDS_SchedulingClassQosPolicy *to)
{
    c_bool result = OS_C_TRUE;
    (void) base;

#ifdef OSPL_BOUNDS_CHECK
    if((((c_long)from->kind) >= 0) && (((c_long)from->kind) < 3) ){
        to->kind = (enum _DDS_SchedulingClassQosPolicyKind)from->kind;
    } else {
        OS_REPORT (OS_ERROR, "copyIn", 0,"Member 'DDS::SchedulingClassQosPolicy.kind' of type 'SchedulingClassQosPolicyKind' is out of range.");
        result = OS_C_FALSE;
    }
#else
    to->kind = (enum _DDS_SchedulingClassQosPolicyKind)from->kind;
#endif
    return result;
}

c_bool
__DDS_SchedulingPriorityQosPolicy__copyIn(
    c_base base,
    struct ::DDS::SchedulingPriorityQosPolicy *from,
    struct _DDS_SchedulingPriorityQosPolicy *to)
{
    c_bool result = OS_C_TRUE;
    (void) base;

#ifdef OSPL_BOUNDS_CHECK
    if((((c_long)from->kind) >= 0) && (((c_long)from->kind) < 2) ){
        to->kind = (enum _DDS_SchedulingPriorityQosPolicyKind)from->kind;
    } else {
        OS_REPORT (OS_ERROR, "copyIn", 0,"Member 'DDS::SchedulingPriorityQosPolicy.kind' of type 'SchedulingPriorityQosPolicyKind' is out of range.");
        result = OS_C_FALSE;
    }
#else
    to->kind = (enum _DDS_SchedulingPriorityQosPolicyKind)from->kind;
#endif
    return result;
}

c_bool
__DDS_SchedulingQosPolicy__copyIn(
    c_base base,
    struct ::DDS::SchedulingQosPolicy *from,
    struct _DDS_SchedulingQosPolicy *to)
{
    c_bool result = OS_C_TRUE;
    (void) base;

    if(result){
        extern c_bool __DDS_SchedulingClassQosPolicy__copyIn(c_base, ::DDS::SchedulingClassQosPolicy *, _DDS_SchedulingClassQosPolicy *);
        result = __DDS_SchedulingClassQosPolicy__copyIn(base, &from->scheduling_class, &to->scheduling_class);
    }
    if(result){
        extern c_bool __DDS_SchedulingPriorityQosPolicy__copyIn(c_base, ::DDS::SchedulingPriorityQosPolicy *, _DDS_SchedulingPriorityQosPolicy *);
        result = __DDS_SchedulingPriorityQosPolicy__copyIn(base, &from->scheduling_priority_kind, &to->scheduling_priority_kind);
    }
    to->scheduling_priority = (c_long)from->scheduling_priority;
    return result;
}

c_bool
__DDS_ViewKeyQosPolicy__copyIn(
    c_base base,
    struct ::DDS::ViewKeyQosPolicy *from,
    struct _DDS_ViewKeyQosPolicy *to)
{
    c_bool result = OS_C_TRUE;
    (void) base;

    to->use_key_list = (c_bool)from->use_key_list;
    if(result){
        extern c_bool __DDS_StringSeq__copyIn(c_base, ::DDS::StringSeq *, _DDS_StringSeq *);
        result = __DDS_StringSeq__copyIn(base, &from->key_list, &to->key_list);
    }
    return result;
}

c_bool
__DDS_DataReaderViewQos__copyIn(
    c_base base,
    struct ::DDS::DataReaderViewQos *from,
    struct _DDS_DataReaderViewQos *to)
{
    c_bool result = OS_C_TRUE;
    (void) base;

    if(result){
        extern c_bool __DDS_ViewKeyQosPolicy__copyIn(c_base, ::DDS::ViewKeyQosPolicy *, _DDS_ViewKeyQosPolicy *);
        result = __DDS_ViewKeyQosPolicy__copyIn(base, &from->view_keys, &to->view_keys);
    }
    return result;
}

c_bool
__DDS_DomainParticipantFactoryQos__copyIn(
    c_base base,
    struct ::DDS::DomainParticipantFactoryQos *from,
    struct _DDS_DomainParticipantFactoryQos *to)
{
    c_bool result = OS_C_TRUE;
    (void) base;

    if(result){
        extern c_bool __DDS_EntityFactoryQosPolicy__copyIn(c_base, ::DDS::EntityFactoryQosPolicy *, _DDS_EntityFactoryQosPolicy *);
        result = __DDS_EntityFactoryQosPolicy__copyIn(base, &from->entity_factory, &to->entity_factory);
    }
    return result;
}

c_bool
__DDS_DomainParticipantQos__copyIn(
    c_base base,
    struct ::DDS::DomainParticipantQos *from,
    struct _DDS_DomainParticipantQos *to)
{
    c_bool result = OS_C_TRUE;
    (void) base;

    if(result){
        extern c_bool __DDS_UserDataQosPolicy__copyIn(c_base, ::DDS::UserDataQosPolicy *, _DDS_UserDataQosPolicy *);
        result = __DDS_UserDataQosPolicy__copyIn(base, &from->user_data, &to->user_data);
    }
    if(result){
        extern c_bool __DDS_EntityFactoryQosPolicy__copyIn(c_base, ::DDS::EntityFactoryQosPolicy *, _DDS_EntityFactoryQosPolicy *);
        result = __DDS_EntityFactoryQosPolicy__copyIn(base, &from->entity_factory, &to->entity_factory);
    }
    if(result){
        extern c_bool __DDS_SchedulingQosPolicy__copyIn(c_base, ::DDS::SchedulingQosPolicy *, _DDS_SchedulingQosPolicy *);
        result = __DDS_SchedulingQosPolicy__copyIn(base, &from->watchdog_scheduling, &to->watchdog_scheduling);
    }
    if(result){
        extern c_bool __DDS_SchedulingQosPolicy__copyIn(c_base, ::DDS::SchedulingQosPolicy *, _DDS_SchedulingQosPolicy *);
        result = __DDS_SchedulingQosPolicy__copyIn(base, &from->listener_scheduling, &to->listener_scheduling);
    }
    return result;
}

c_bool
__DDS_TopicQos__copyIn(
    c_base base,
    struct ::DDS::TopicQos *from,
    struct _DDS_TopicQos *to)
{
    c_bool result = OS_C_TRUE;
    (void) base;

    if(result){
        extern c_bool __DDS_TopicDataQosPolicy__copyIn(c_base, ::DDS::TopicDataQosPolicy *, _DDS_TopicDataQosPolicy *);
        result = __DDS_TopicDataQosPolicy__copyIn(base, &from->topic_data, &to->topic_data);
    }
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
        extern c_bool __DDS_TransportPriorityQosPolicy__copyIn(c_base, ::DDS::TransportPriorityQosPolicy *, _DDS_TransportPriorityQosPolicy *);
        result = __DDS_TransportPriorityQosPolicy__copyIn(base, &from->transport_priority, &to->transport_priority);
    }
    if(result){
        extern c_bool __DDS_LifespanQosPolicy__copyIn(c_base, ::DDS::LifespanQosPolicy *, _DDS_LifespanQosPolicy *);
        result = __DDS_LifespanQosPolicy__copyIn(base, &from->lifespan, &to->lifespan);
    }
    if(result){
        extern c_bool __DDS_OwnershipQosPolicy__copyIn(c_base, ::DDS::OwnershipQosPolicy *, _DDS_OwnershipQosPolicy *);
        result = __DDS_OwnershipQosPolicy__copyIn(base, &from->ownership, &to->ownership);
    }
    return result;
}

c_bool
__DDS_DataWriterQos__copyIn(
    c_base base,
    struct ::DDS::DataWriterQos *from,
    struct _DDS_DataWriterQos *to)
{
    c_bool result = OS_C_TRUE;
    (void) base;

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
        extern c_bool __DDS_TransportPriorityQosPolicy__copyIn(c_base, ::DDS::TransportPriorityQosPolicy *, _DDS_TransportPriorityQosPolicy *);
        result = __DDS_TransportPriorityQosPolicy__copyIn(base, &from->transport_priority, &to->transport_priority);
    }
    if(result){
        extern c_bool __DDS_LifespanQosPolicy__copyIn(c_base, ::DDS::LifespanQosPolicy *, _DDS_LifespanQosPolicy *);
        result = __DDS_LifespanQosPolicy__copyIn(base, &from->lifespan, &to->lifespan);
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
        extern c_bool __DDS_WriterDataLifecycleQosPolicy__copyIn(c_base, ::DDS::WriterDataLifecycleQosPolicy *, _DDS_WriterDataLifecycleQosPolicy *);
        result = __DDS_WriterDataLifecycleQosPolicy__copyIn(base, &from->writer_data_lifecycle, &to->writer_data_lifecycle);
    }
    return result;
}

c_bool
__DDS_PublisherQos__copyIn(
    c_base base,
    struct ::DDS::PublisherQos *from,
    struct _DDS_PublisherQos *to)
{
    c_bool result = OS_C_TRUE;
    (void) base;

    if(result){
        extern c_bool __DDS_PresentationQosPolicy__copyIn(c_base, ::DDS::PresentationQosPolicy *, _DDS_PresentationQosPolicy *);
        result = __DDS_PresentationQosPolicy__copyIn(base, &from->presentation, &to->presentation);
    }
    if(result){
        extern c_bool __DDS_PartitionQosPolicy__copyIn(c_base, ::DDS::PartitionQosPolicy *, _DDS_PartitionQosPolicy *);
        result = __DDS_PartitionQosPolicy__copyIn(base, &from->partition, &to->partition);
    }
    if(result){
        extern c_bool __DDS_GroupDataQosPolicy__copyIn(c_base, ::DDS::GroupDataQosPolicy *, _DDS_GroupDataQosPolicy *);
        result = __DDS_GroupDataQosPolicy__copyIn(base, &from->group_data, &to->group_data);
    }
    if(result){
        extern c_bool __DDS_EntityFactoryQosPolicy__copyIn(c_base, ::DDS::EntityFactoryQosPolicy *, _DDS_EntityFactoryQosPolicy *);
        result = __DDS_EntityFactoryQosPolicy__copyIn(base, &from->entity_factory, &to->entity_factory);
    }
    return result;
}

c_bool
__DDS_DataReaderQos__copyIn(
    c_base base,
    struct ::DDS::DataReaderQos *from,
    struct _DDS_DataReaderQos *to)
{
    c_bool result = OS_C_TRUE;
    (void) base;

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
        extern c_bool __DDS_UserDataQosPolicy__copyIn(c_base, ::DDS::UserDataQosPolicy *, _DDS_UserDataQosPolicy *);
        result = __DDS_UserDataQosPolicy__copyIn(base, &from->user_data, &to->user_data);
    }
    if(result){
        extern c_bool __DDS_OwnershipQosPolicy__copyIn(c_base, ::DDS::OwnershipQosPolicy *, _DDS_OwnershipQosPolicy *);
        result = __DDS_OwnershipQosPolicy__copyIn(base, &from->ownership, &to->ownership);
    }
    if(result){
        extern c_bool __DDS_TimeBasedFilterQosPolicy__copyIn(c_base, ::DDS::TimeBasedFilterQosPolicy *, _DDS_TimeBasedFilterQosPolicy *);
        result = __DDS_TimeBasedFilterQosPolicy__copyIn(base, &from->time_based_filter, &to->time_based_filter);
    }
    if(result){
        extern c_bool __DDS_ReaderDataLifecycleQosPolicy__copyIn(c_base, ::DDS::ReaderDataLifecycleQosPolicy *, _DDS_ReaderDataLifecycleQosPolicy *);
        result = __DDS_ReaderDataLifecycleQosPolicy__copyIn(base, &from->reader_data_lifecycle, &to->reader_data_lifecycle);
    }
    if(result){
        extern c_bool __DDS_SubscriptionKeyQosPolicy__copyIn(c_base, ::DDS::SubscriptionKeyQosPolicy *, _DDS_SubscriptionKeyQosPolicy *);
        result = __DDS_SubscriptionKeyQosPolicy__copyIn(base, &from->subscription_keys, &to->subscription_keys);
    }
    if(result){
        extern c_bool __DDS_ReaderLifespanQosPolicy__copyIn(c_base, ::DDS::ReaderLifespanQosPolicy *, _DDS_ReaderLifespanQosPolicy *);
        result = __DDS_ReaderLifespanQosPolicy__copyIn(base, &from->reader_lifespan, &to->reader_lifespan);
    }
    if(result){
        extern c_bool __DDS_ShareQosPolicy__copyIn(c_base, ::DDS::ShareQosPolicy *, _DDS_ShareQosPolicy *);
        result = __DDS_ShareQosPolicy__copyIn(base, &from->share, &to->share);
    }
    return result;
}

c_bool
__DDS_SubscriberQos__copyIn(
    c_base base,
    struct ::DDS::SubscriberQos *from,
    struct _DDS_SubscriberQos *to)
{
    c_bool result = OS_C_TRUE;
    (void) base;

    if(result){
        extern c_bool __DDS_PresentationQosPolicy__copyIn(c_base, ::DDS::PresentationQosPolicy *, _DDS_PresentationQosPolicy *);
        result = __DDS_PresentationQosPolicy__copyIn(base, &from->presentation, &to->presentation);
    }
    if(result){
        extern c_bool __DDS_PartitionQosPolicy__copyIn(c_base, ::DDS::PartitionQosPolicy *, _DDS_PartitionQosPolicy *);
        result = __DDS_PartitionQosPolicy__copyIn(base, &from->partition, &to->partition);
    }
    if(result){
        extern c_bool __DDS_GroupDataQosPolicy__copyIn(c_base, ::DDS::GroupDataQosPolicy *, _DDS_GroupDataQosPolicy *);
        result = __DDS_GroupDataQosPolicy__copyIn(base, &from->group_data, &to->group_data);
    }
    if(result){
        extern c_bool __DDS_EntityFactoryQosPolicy__copyIn(c_base, ::DDS::EntityFactoryQosPolicy *, _DDS_EntityFactoryQosPolicy *);
        result = __DDS_EntityFactoryQosPolicy__copyIn(base, &from->entity_factory, &to->entity_factory);
    }
    if(result){
        extern c_bool __DDS_ShareQosPolicy__copyIn(c_base, ::DDS::ShareQosPolicy *, _DDS_ShareQosPolicy *);
        result = __DDS_ShareQosPolicy__copyIn(base, &from->share, &to->share);
    }
    return result;
}

void
__DDS_Time_t__copyOut(
    void *_from,
    void *_to)
{
    struct _DDS_Time_t *from = (struct _DDS_Time_t *)_from;
    struct ::DDS::Time_t *to = (struct ::DDS::Time_t *)_to;
    to->sec = (::DDS::Long)from->sec;
    to->nanosec = (::DDS::ULong)from->nanosec;
}

void
__DDS_EntityFactoryQosPolicy__copyOut(
    void *_from,
    void *_to)
{
    struct _DDS_EntityFactoryQosPolicy *from = (struct _DDS_EntityFactoryQosPolicy *)_from;
    struct ::DDS::EntityFactoryQosPolicy *to = (struct ::DDS::EntityFactoryQosPolicy *)_to;
    to->autoenable_created_entities = (::DDS::Boolean)(from->autoenable_created_entities != 0);
}

void
__DDS_WriterDataLifecycleQosPolicy__copyOut(
    void *_from,
    void *_to)
{
    struct _DDS_WriterDataLifecycleQosPolicy *from = (struct _DDS_WriterDataLifecycleQosPolicy *)_from;
    struct ::DDS::WriterDataLifecycleQosPolicy *to = (struct ::DDS::WriterDataLifecycleQosPolicy *)_to;
    to->autodispose_unregistered_instances = (::DDS::Boolean)(from->autodispose_unregistered_instances != 0);
    {
        extern void __DDS_Duration_t__copyOut(void *, void *);
        __DDS_Duration_t__copyOut((void *)&from->autopurge_suspended_samples_delay, (void *)&to->autopurge_suspended_samples_delay);
    }
    {
        extern void __DDS_Duration_t__copyOut(void *, void *);
        __DDS_Duration_t__copyOut((void *)&from->autounregister_instance_delay, (void *)&to->autounregister_instance_delay);
    }
}

void
__DDS_InvalidSampleVisibilityQosPolicy__copyOut(
    void *_from,
    void *_to)
{
    struct _DDS_InvalidSampleVisibilityQosPolicy *from = (struct _DDS_InvalidSampleVisibilityQosPolicy *)_from;
    struct ::DDS::InvalidSampleVisibilityQosPolicy *to = (struct ::DDS::InvalidSampleVisibilityQosPolicy *)_to;
    to->kind = (::DDS::InvalidSampleVisibilityQosPolicyKind)from->kind;
}

void
__DDS_ReaderDataLifecycleQosPolicy__copyOut(
    void *_from,
    void *_to)
{
    struct _DDS_ReaderDataLifecycleQosPolicy *from = (struct _DDS_ReaderDataLifecycleQosPolicy *)_from;
    struct ::DDS::ReaderDataLifecycleQosPolicy *to = (struct ::DDS::ReaderDataLifecycleQosPolicy *)_to;
    {
        extern void __DDS_Duration_t__copyOut(void *, void *);
        __DDS_Duration_t__copyOut((void *)&from->autopurge_nowriter_samples_delay, (void *)&to->autopurge_nowriter_samples_delay);
    }
    {
        extern void __DDS_Duration_t__copyOut(void *, void *);
        __DDS_Duration_t__copyOut((void *)&from->autopurge_disposed_samples_delay, (void *)&to->autopurge_disposed_samples_delay);
    }
    to->enable_invalid_samples = (::DDS::Boolean)(from->enable_invalid_samples != 0);
    {
        extern void __DDS_InvalidSampleVisibilityQosPolicy__copyOut(void *, void *);
        __DDS_InvalidSampleVisibilityQosPolicy__copyOut((void *)&from->invalid_sample_visibility, (void *)&to->invalid_sample_visibility);
    }
}

void
__DDS_SubscriptionKeyQosPolicy__copyOut(
    void *_from,
    void *_to)
{
    struct _DDS_SubscriptionKeyQosPolicy *from = (struct _DDS_SubscriptionKeyQosPolicy *)_from;
    struct ::DDS::SubscriptionKeyQosPolicy *to = (struct ::DDS::SubscriptionKeyQosPolicy *)_to;
    to->use_key_list = (::DDS::Boolean)(from->use_key_list != 0);
    {
        extern void __DDS_StringSeq__copyOut(void *, void *);
        __DDS_StringSeq__copyOut((void *)&from->key_list, (void *)&to->key_list);
    }
}

void
__DDS_ReaderLifespanQosPolicy__copyOut(
    void *_from,
    void *_to)
{
    struct _DDS_ReaderLifespanQosPolicy *from = (struct _DDS_ReaderLifespanQosPolicy *)_from;
    struct ::DDS::ReaderLifespanQosPolicy *to = (struct ::DDS::ReaderLifespanQosPolicy *)_to;
    to->use_lifespan = (::DDS::Boolean)(from->use_lifespan != 0);
    {
        extern void __DDS_Duration_t__copyOut(void *, void *);
        __DDS_Duration_t__copyOut((void *)&from->duration, (void *)&to->duration);
    }
}

void
__DDS_ShareQosPolicy__copyOut(
    void *_from,
    void *_to)
{
    struct _DDS_ShareQosPolicy *from = (struct _DDS_ShareQosPolicy *)_from;
    struct ::DDS::ShareQosPolicy *to = (struct ::DDS::ShareQosPolicy *)_to;
    to->name = DDS::string_dup(from->name ? from->name : "");
    to->enable = (::DDS::Boolean)(from->enable != 0);
}

void
__DDS_SchedulingClassQosPolicy__copyOut(
    void *_from,
    void *_to)
{
    struct _DDS_SchedulingClassQosPolicy *from = (struct _DDS_SchedulingClassQosPolicy *)_from;
    struct ::DDS::SchedulingClassQosPolicy *to = (struct ::DDS::SchedulingClassQosPolicy *)_to;
    to->kind = (::DDS::SchedulingClassQosPolicyKind)from->kind;
}

void
__DDS_SchedulingPriorityQosPolicy__copyOut(
    void *_from,
    void *_to)
{
    struct _DDS_SchedulingPriorityQosPolicy *from = (struct _DDS_SchedulingPriorityQosPolicy *)_from;
    struct ::DDS::SchedulingPriorityQosPolicy *to = (struct ::DDS::SchedulingPriorityQosPolicy *)_to;
    to->kind = (::DDS::SchedulingPriorityQosPolicyKind)from->kind;
}

void
__DDS_SchedulingQosPolicy__copyOut(
    void *_from,
    void *_to)
{
    struct _DDS_SchedulingQosPolicy *from = (struct _DDS_SchedulingQosPolicy *)_from;
    struct ::DDS::SchedulingQosPolicy *to = (struct ::DDS::SchedulingQosPolicy *)_to;
    {
        extern void __DDS_SchedulingClassQosPolicy__copyOut(void *, void *);
        __DDS_SchedulingClassQosPolicy__copyOut((void *)&from->scheduling_class, (void *)&to->scheduling_class);
    }
    {
        extern void __DDS_SchedulingPriorityQosPolicy__copyOut(void *, void *);
        __DDS_SchedulingPriorityQosPolicy__copyOut((void *)&from->scheduling_priority_kind, (void *)&to->scheduling_priority_kind);
    }
    to->scheduling_priority = (::DDS::Long)from->scheduling_priority;
}

void
__DDS_ViewKeyQosPolicy__copyOut(
    void *_from,
    void *_to)
{
    struct _DDS_ViewKeyQosPolicy *from = (struct _DDS_ViewKeyQosPolicy *)_from;
    struct ::DDS::ViewKeyQosPolicy *to = (struct ::DDS::ViewKeyQosPolicy *)_to;
    to->use_key_list = (::DDS::Boolean)(from->use_key_list != 0);
    {
        extern void __DDS_StringSeq__copyOut(void *, void *);
        __DDS_StringSeq__copyOut((void *)&from->key_list, (void *)&to->key_list);
    }
}

void
__DDS_DataReaderViewQos__copyOut(
    void *_from,
    void *_to)
{
    struct _DDS_DataReaderViewQos *from = (struct _DDS_DataReaderViewQos *)_from;
    struct ::DDS::DataReaderViewQos *to = (struct ::DDS::DataReaderViewQos *)_to;
    {
        extern void __DDS_ViewKeyQosPolicy__copyOut(void *, void *);
        __DDS_ViewKeyQosPolicy__copyOut((void *)&from->view_keys, (void *)&to->view_keys);
    }
}

void
__DDS_DomainParticipantFactoryQos__copyOut(
    void *_from,
    void *_to)
{
    struct _DDS_DomainParticipantFactoryQos *from = (struct _DDS_DomainParticipantFactoryQos *)_from;
    struct ::DDS::DomainParticipantFactoryQos *to = (struct ::DDS::DomainParticipantFactoryQos *)_to;
    {
        extern void __DDS_EntityFactoryQosPolicy__copyOut(void *, void *);
        __DDS_EntityFactoryQosPolicy__copyOut((void *)&from->entity_factory, (void *)&to->entity_factory);
    }
}

void
__DDS_DomainParticipantQos__copyOut(
    void *_from,
    void *_to)
{
    struct _DDS_DomainParticipantQos *from = (struct _DDS_DomainParticipantQos *)_from;
    struct ::DDS::DomainParticipantQos *to = (struct ::DDS::DomainParticipantQos *)_to;
    {
        extern void __DDS_UserDataQosPolicy__copyOut(void *, void *);
        __DDS_UserDataQosPolicy__copyOut((void *)&from->user_data, (void *)&to->user_data);
    }
    {
        extern void __DDS_EntityFactoryQosPolicy__copyOut(void *, void *);
        __DDS_EntityFactoryQosPolicy__copyOut((void *)&from->entity_factory, (void *)&to->entity_factory);
    }
    {
        extern void __DDS_SchedulingQosPolicy__copyOut(void *, void *);
        __DDS_SchedulingQosPolicy__copyOut((void *)&from->watchdog_scheduling, (void *)&to->watchdog_scheduling);
    }
    {
        extern void __DDS_SchedulingQosPolicy__copyOut(void *, void *);
        __DDS_SchedulingQosPolicy__copyOut((void *)&from->listener_scheduling, (void *)&to->listener_scheduling);
    }
}

void
__DDS_TopicQos__copyOut(
    void *_from,
    void *_to)
{
    struct _DDS_TopicQos *from = (struct _DDS_TopicQos *)_from;
    struct ::DDS::TopicQos *to = (struct ::DDS::TopicQos *)_to;
    {
        extern void __DDS_TopicDataQosPolicy__copyOut(void *, void *);
        __DDS_TopicDataQosPolicy__copyOut((void *)&from->topic_data, (void *)&to->topic_data);
    }
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
        extern void __DDS_TransportPriorityQosPolicy__copyOut(void *, void *);
        __DDS_TransportPriorityQosPolicy__copyOut((void *)&from->transport_priority, (void *)&to->transport_priority);
    }
    {
        extern void __DDS_LifespanQosPolicy__copyOut(void *, void *);
        __DDS_LifespanQosPolicy__copyOut((void *)&from->lifespan, (void *)&to->lifespan);
    }
    {
        extern void __DDS_OwnershipQosPolicy__copyOut(void *, void *);
        __DDS_OwnershipQosPolicy__copyOut((void *)&from->ownership, (void *)&to->ownership);
    }
}

void
__DDS_DataWriterQos__copyOut(
    void *_from,
    void *_to)
{
    struct _DDS_DataWriterQos *from = (struct _DDS_DataWriterQos *)_from;
    struct ::DDS::DataWriterQos *to = (struct ::DDS::DataWriterQos *)_to;
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
        extern void __DDS_TransportPriorityQosPolicy__copyOut(void *, void *);
        __DDS_TransportPriorityQosPolicy__copyOut((void *)&from->transport_priority, (void *)&to->transport_priority);
    }
    {
        extern void __DDS_LifespanQosPolicy__copyOut(void *, void *);
        __DDS_LifespanQosPolicy__copyOut((void *)&from->lifespan, (void *)&to->lifespan);
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
        extern void __DDS_WriterDataLifecycleQosPolicy__copyOut(void *, void *);
        __DDS_WriterDataLifecycleQosPolicy__copyOut((void *)&from->writer_data_lifecycle, (void *)&to->writer_data_lifecycle);
    }
}

void
__DDS_PublisherQos__copyOut(
    void *_from,
    void *_to)
{
    struct _DDS_PublisherQos *from = (struct _DDS_PublisherQos *)_from;
    struct ::DDS::PublisherQos *to = (struct ::DDS::PublisherQos *)_to;
    {
        extern void __DDS_PresentationQosPolicy__copyOut(void *, void *);
        __DDS_PresentationQosPolicy__copyOut((void *)&from->presentation, (void *)&to->presentation);
    }
    {
        extern void __DDS_PartitionQosPolicy__copyOut(void *, void *);
        __DDS_PartitionQosPolicy__copyOut((void *)&from->partition, (void *)&to->partition);
    }
    {
        extern void __DDS_GroupDataQosPolicy__copyOut(void *, void *);
        __DDS_GroupDataQosPolicy__copyOut((void *)&from->group_data, (void *)&to->group_data);
    }
    {
        extern void __DDS_EntityFactoryQosPolicy__copyOut(void *, void *);
        __DDS_EntityFactoryQosPolicy__copyOut((void *)&from->entity_factory, (void *)&to->entity_factory);
    }
}

void
__DDS_DataReaderQos__copyOut(
    void *_from,
    void *_to)
{
    struct _DDS_DataReaderQos *from = (struct _DDS_DataReaderQos *)_from;
    struct ::DDS::DataReaderQos *to = (struct ::DDS::DataReaderQos *)_to;
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
        extern void __DDS_UserDataQosPolicy__copyOut(void *, void *);
        __DDS_UserDataQosPolicy__copyOut((void *)&from->user_data, (void *)&to->user_data);
    }
    {
        extern void __DDS_OwnershipQosPolicy__copyOut(void *, void *);
        __DDS_OwnershipQosPolicy__copyOut((void *)&from->ownership, (void *)&to->ownership);
    }
    {
        extern void __DDS_TimeBasedFilterQosPolicy__copyOut(void *, void *);
        __DDS_TimeBasedFilterQosPolicy__copyOut((void *)&from->time_based_filter, (void *)&to->time_based_filter);
    }
    {
        extern void __DDS_ReaderDataLifecycleQosPolicy__copyOut(void *, void *);
        __DDS_ReaderDataLifecycleQosPolicy__copyOut((void *)&from->reader_data_lifecycle, (void *)&to->reader_data_lifecycle);
    }
    {
        extern void __DDS_SubscriptionKeyQosPolicy__copyOut(void *, void *);
        __DDS_SubscriptionKeyQosPolicy__copyOut((void *)&from->subscription_keys, (void *)&to->subscription_keys);
    }
    {
        extern void __DDS_ReaderLifespanQosPolicy__copyOut(void *, void *);
        __DDS_ReaderLifespanQosPolicy__copyOut((void *)&from->reader_lifespan, (void *)&to->reader_lifespan);
    }
    {
        extern void __DDS_ShareQosPolicy__copyOut(void *, void *);
        __DDS_ShareQosPolicy__copyOut((void *)&from->share, (void *)&to->share);
    }
}

void
__DDS_SubscriberQos__copyOut(
    void *_from,
    void *_to)
{
    struct _DDS_SubscriberQos *from = (struct _DDS_SubscriberQos *)_from;
    struct ::DDS::SubscriberQos *to = (struct ::DDS::SubscriberQos *)_to;
    {
        extern void __DDS_PresentationQosPolicy__copyOut(void *, void *);
        __DDS_PresentationQosPolicy__copyOut((void *)&from->presentation, (void *)&to->presentation);
    }
    {
        extern void __DDS_PartitionQosPolicy__copyOut(void *, void *);
        __DDS_PartitionQosPolicy__copyOut((void *)&from->partition, (void *)&to->partition);
    }
    {
        extern void __DDS_GroupDataQosPolicy__copyOut(void *, void *);
        __DDS_GroupDataQosPolicy__copyOut((void *)&from->group_data, (void *)&to->group_data);
    }
    {
        extern void __DDS_EntityFactoryQosPolicy__copyOut(void *, void *);
        __DDS_EntityFactoryQosPolicy__copyOut((void *)&from->entity_factory, (void *)&to->entity_factory);
    }
    {
        extern void __DDS_ShareQosPolicy__copyOut(void *, void *);
        __DDS_ShareQosPolicy__copyOut((void *)&from->share, (void *)&to->share);
    }
}

