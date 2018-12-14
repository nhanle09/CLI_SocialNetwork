#include "dds_namedQosTypesSplDcps.h"
#include "ccpp_dds_namedQosTypes.h"
#include "dds_type_aliases.h"

const char *
__DDS_NamedDomainParticipantQos__name(void)
{
    return (const char*)"DDS::NamedDomainParticipantQos";
}

const char *
__DDS_NamedDomainParticipantQos__keys(void)
{
    return (const char*)"";
}

const char *
__DDS_NamedPublisherQos__name(void)
{
    return (const char*)"DDS::NamedPublisherQos";
}

const char *
__DDS_NamedPublisherQos__keys(void)
{
    return (const char*)"";
}

const char *
__DDS_NamedSubscriberQos__name(void)
{
    return (const char*)"DDS::NamedSubscriberQos";
}

const char *
__DDS_NamedSubscriberQos__keys(void)
{
    return (const char*)"";
}

const char *
__DDS_NamedTopicQos__name(void)
{
    return (const char*)"DDS::NamedTopicQos";
}

const char *
__DDS_NamedTopicQos__keys(void)
{
    return (const char*)"";
}

const char *
__DDS_NamedDataWriterQos__name(void)
{
    return (const char*)"DDS::NamedDataWriterQos";
}

const char *
__DDS_NamedDataWriterQos__keys(void)
{
    return (const char*)"";
}

const char *
__DDS_NamedDataReaderQos__name(void)
{
    return (const char*)"DDS::NamedDataReaderQos";
}

const char *
__DDS_NamedDataReaderQos__keys(void)
{
    return (const char*)"";
}

#include <v_kernel.h>
#include <v_topic.h>
#include <os_stdlib.h>
#include <string.h>
#include <os_report.h>

c_bool
__DDS_NamedDomainParticipantQos__copyIn(
    c_base base,
    struct ::DDS::NamedDomainParticipantQos *from,
    struct _DDS_NamedDomainParticipantQos *to)
{
    c_bool result = OS_C_TRUE;
    (void) base;

#ifdef OSPL_BOUNDS_CHECK
    if(from->name){
        to->name = c_stringNew(base, from->name);
    } else {
        OS_REPORT (OS_ERROR, "copyIn", 0,"Member 'DDS::NamedDomainParticipantQos.name' of type 'c_string' is NULL.");
        result = OS_C_FALSE;
    }
#else
    to->name = c_stringNew(base, from->name);
#endif
    if(result){
        extern c_bool __DDS_DomainParticipantQos__copyIn(c_base, ::DDS::DomainParticipantQos *, _DDS_DomainParticipantQos *);
        result = __DDS_DomainParticipantQos__copyIn(base, &from->domainparticipant_qos, &to->domainparticipant_qos);
    }
    return result;
}

c_bool
__DDS_NamedPublisherQos__copyIn(
    c_base base,
    struct ::DDS::NamedPublisherQos *from,
    struct _DDS_NamedPublisherQos *to)
{
    c_bool result = OS_C_TRUE;
    (void) base;

#ifdef OSPL_BOUNDS_CHECK
    if(from->name){
        to->name = c_stringNew(base, from->name);
    } else {
        OS_REPORT (OS_ERROR, "copyIn", 0,"Member 'DDS::NamedPublisherQos.name' of type 'c_string' is NULL.");
        result = OS_C_FALSE;
    }
#else
    to->name = c_stringNew(base, from->name);
#endif
    if(result){
        extern c_bool __DDS_PublisherQos__copyIn(c_base, ::DDS::PublisherQos *, _DDS_PublisherQos *);
        result = __DDS_PublisherQos__copyIn(base, &from->publisher_qos, &to->publisher_qos);
    }
    return result;
}

c_bool
__DDS_NamedSubscriberQos__copyIn(
    c_base base,
    struct ::DDS::NamedSubscriberQos *from,
    struct _DDS_NamedSubscriberQos *to)
{
    c_bool result = OS_C_TRUE;
    (void) base;

#ifdef OSPL_BOUNDS_CHECK
    if(from->name){
        to->name = c_stringNew(base, from->name);
    } else {
        OS_REPORT (OS_ERROR, "copyIn", 0,"Member 'DDS::NamedSubscriberQos.name' of type 'c_string' is NULL.");
        result = OS_C_FALSE;
    }
#else
    to->name = c_stringNew(base, from->name);
#endif
    if(result){
        extern c_bool __DDS_SubscriberQos__copyIn(c_base, ::DDS::SubscriberQos *, _DDS_SubscriberQos *);
        result = __DDS_SubscriberQos__copyIn(base, &from->subscriber_qos, &to->subscriber_qos);
    }
    return result;
}

c_bool
__DDS_NamedTopicQos__copyIn(
    c_base base,
    struct ::DDS::NamedTopicQos *from,
    struct _DDS_NamedTopicQos *to)
{
    c_bool result = OS_C_TRUE;
    (void) base;

#ifdef OSPL_BOUNDS_CHECK
    if(from->name){
        to->name = c_stringNew(base, from->name);
    } else {
        OS_REPORT (OS_ERROR, "copyIn", 0,"Member 'DDS::NamedTopicQos.name' of type 'c_string' is NULL.");
        result = OS_C_FALSE;
    }
#else
    to->name = c_stringNew(base, from->name);
#endif
    if(result){
        extern c_bool __DDS_TopicQos__copyIn(c_base, ::DDS::TopicQos *, _DDS_TopicQos *);
        result = __DDS_TopicQos__copyIn(base, &from->topic_qos, &to->topic_qos);
    }
    return result;
}

c_bool
__DDS_NamedDataWriterQos__copyIn(
    c_base base,
    struct ::DDS::NamedDataWriterQos *from,
    struct _DDS_NamedDataWriterQos *to)
{
    c_bool result = OS_C_TRUE;
    (void) base;

#ifdef OSPL_BOUNDS_CHECK
    if(from->name){
        to->name = c_stringNew(base, from->name);
    } else {
        OS_REPORT (OS_ERROR, "copyIn", 0,"Member 'DDS::NamedDataWriterQos.name' of type 'c_string' is NULL.");
        result = OS_C_FALSE;
    }
#else
    to->name = c_stringNew(base, from->name);
#endif
    if(result){
        extern c_bool __DDS_DataWriterQos__copyIn(c_base, ::DDS::DataWriterQos *, _DDS_DataWriterQos *);
        result = __DDS_DataWriterQos__copyIn(base, &from->datawriter_qos, &to->datawriter_qos);
    }
    return result;
}

c_bool
__DDS_NamedDataReaderQos__copyIn(
    c_base base,
    struct ::DDS::NamedDataReaderQos *from,
    struct _DDS_NamedDataReaderQos *to)
{
    c_bool result = OS_C_TRUE;
    (void) base;

#ifdef OSPL_BOUNDS_CHECK
    if(from->name){
        to->name = c_stringNew(base, from->name);
    } else {
        OS_REPORT (OS_ERROR, "copyIn", 0,"Member 'DDS::NamedDataReaderQos.name' of type 'c_string' is NULL.");
        result = OS_C_FALSE;
    }
#else
    to->name = c_stringNew(base, from->name);
#endif
    if(result){
        extern c_bool __DDS_DataReaderQos__copyIn(c_base, ::DDS::DataReaderQos *, _DDS_DataReaderQos *);
        result = __DDS_DataReaderQos__copyIn(base, &from->datareader_qos, &to->datareader_qos);
    }
    return result;
}

void
__DDS_NamedDomainParticipantQos__copyOut(
    void *_from,
    void *_to)
{
    struct _DDS_NamedDomainParticipantQos *from = (struct _DDS_NamedDomainParticipantQos *)_from;
    struct ::DDS::NamedDomainParticipantQos *to = (struct ::DDS::NamedDomainParticipantQos *)_to;
    to->name = DDS::string_dup(from->name ? from->name : "");
    {
        extern void __DDS_DomainParticipantQos__copyOut(void *, void *);
        __DDS_DomainParticipantQos__copyOut((void *)&from->domainparticipant_qos, (void *)&to->domainparticipant_qos);
    }
}

void
__DDS_NamedPublisherQos__copyOut(
    void *_from,
    void *_to)
{
    struct _DDS_NamedPublisherQos *from = (struct _DDS_NamedPublisherQos *)_from;
    struct ::DDS::NamedPublisherQos *to = (struct ::DDS::NamedPublisherQos *)_to;
    to->name = DDS::string_dup(from->name ? from->name : "");
    {
        extern void __DDS_PublisherQos__copyOut(void *, void *);
        __DDS_PublisherQos__copyOut((void *)&from->publisher_qos, (void *)&to->publisher_qos);
    }
}

void
__DDS_NamedSubscriberQos__copyOut(
    void *_from,
    void *_to)
{
    struct _DDS_NamedSubscriberQos *from = (struct _DDS_NamedSubscriberQos *)_from;
    struct ::DDS::NamedSubscriberQos *to = (struct ::DDS::NamedSubscriberQos *)_to;
    to->name = DDS::string_dup(from->name ? from->name : "");
    {
        extern void __DDS_SubscriberQos__copyOut(void *, void *);
        __DDS_SubscriberQos__copyOut((void *)&from->subscriber_qos, (void *)&to->subscriber_qos);
    }
}

void
__DDS_NamedTopicQos__copyOut(
    void *_from,
    void *_to)
{
    struct _DDS_NamedTopicQos *from = (struct _DDS_NamedTopicQos *)_from;
    struct ::DDS::NamedTopicQos *to = (struct ::DDS::NamedTopicQos *)_to;
    to->name = DDS::string_dup(from->name ? from->name : "");
    {
        extern void __DDS_TopicQos__copyOut(void *, void *);
        __DDS_TopicQos__copyOut((void *)&from->topic_qos, (void *)&to->topic_qos);
    }
}

void
__DDS_NamedDataWriterQos__copyOut(
    void *_from,
    void *_to)
{
    struct _DDS_NamedDataWriterQos *from = (struct _DDS_NamedDataWriterQos *)_from;
    struct ::DDS::NamedDataWriterQos *to = (struct ::DDS::NamedDataWriterQos *)_to;
    to->name = DDS::string_dup(from->name ? from->name : "");
    {
        extern void __DDS_DataWriterQos__copyOut(void *, void *);
        __DDS_DataWriterQos__copyOut((void *)&from->datawriter_qos, (void *)&to->datawriter_qos);
    }
}

void
__DDS_NamedDataReaderQos__copyOut(
    void *_from,
    void *_to)
{
    struct _DDS_NamedDataReaderQos *from = (struct _DDS_NamedDataReaderQos *)_from;
    struct ::DDS::NamedDataReaderQos *to = (struct ::DDS::NamedDataReaderQos *)_to;
    to->name = DDS::string_dup(from->name ? from->name : "");
    {
        extern void __DDS_DataReaderQos__copyOut(void *, void *);
        __DDS_DataReaderQos__copyOut((void *)&from->datareader_qos, (void *)&to->datareader_qos);
    }
}

