#include "dds_builtinTopicsDcps_impl.h"
#include "gapi.h"
#include "gapi_loanRegistry.h"
#include "dds_builtinTopicsSplDcps.h"
#include "ccpp_DataReader_impl.h"
#include "ccpp_DataReaderView_impl.h"


extern c_bool
__DDS_ParticipantBuiltinTopicData__copyIn(
    c_base base,
    struct DDS::ParticipantBuiltinTopicData *from,
    struct _DDS_ParticipantBuiltinTopicData *to);

extern void
__DDS_ParticipantBuiltinTopicData__copyOut(
    void *_from,
    void *_to);

// DDS DDS::ParticipantBuiltinTopicData TypeSupportFactory Object Body

::DDS::DataWriter_ptr
DDS::ParticipantBuiltinTopicDataTypeSupportFactory::create_datawriter (gapi_dataWriter handle)
{
    return new DDS::ParticipantBuiltinTopicDataDataWriter_impl(handle);
}

::DDS::DataReader_ptr
DDS::ParticipantBuiltinTopicDataTypeSupportFactory::create_datareader (gapi_dataReader handle)
{
    return new DDS::ParticipantBuiltinTopicDataDataReader_impl (handle);
}


::DDS::DataReaderView_ptr
DDS::ParticipantBuiltinTopicDataTypeSupportFactory::create_view (gapi_dataReaderView handle)
{
    return new DDS::ParticipantBuiltinTopicDataDataReaderView_impl (handle);
}

// DDS DDS::ParticipantBuiltinTopicData TypeSupport Object Body

DDS::ParticipantBuiltinTopicDataTypeSupport::ParticipantBuiltinTopicDataTypeSupport(void) :
    TypeSupport_impl(
        __DDS_ParticipantBuiltinTopicData__name(),
        __DDS_ParticipantBuiltinTopicData__keys(),
        DDS::ParticipantBuiltinTopicDataTypeSupport::metaDescriptor,
        (gapi_copyIn) __DDS_ParticipantBuiltinTopicData__copyIn,
        (gapi_copyOut) __DDS_ParticipantBuiltinTopicData__copyOut,
        (gapi_readerCopy) ::DDS::ccpp_DataReaderCopy<DDS::ParticipantBuiltinTopicDataSeq, DDS::ParticipantBuiltinTopicData>,
        new  DDS::ParticipantBuiltinTopicDataTypeSupportFactory(),
        DDS::ParticipantBuiltinTopicDataTypeSupport::metaDescriptorArrLength)
{
    // Parent constructor takes care of everything.
}

DDS::ParticipantBuiltinTopicDataTypeSupport::~ParticipantBuiltinTopicDataTypeSupport(void)
{
    // Parent destructor takes care of everything.
}

::DDS::ReturnCode_t
DDS::ParticipantBuiltinTopicDataTypeSupport::register_type(
    ::DDS::DomainParticipant_ptr domain,
    const char * type_name) THROW_ORB_EXCEPTIONS
{
    return TypeSupport_impl::register_type(domain, type_name);
}

char *
DDS::ParticipantBuiltinTopicDataTypeSupport::get_type_name() THROW_ORB_EXCEPTIONS
{
    return TypeSupport_impl::get_type_name();
}

// DDS DDS::ParticipantBuiltinTopicData DataWriter_impl Object Body

DDS::ParticipantBuiltinTopicDataDataWriter_impl::ParticipantBuiltinTopicDataDataWriter_impl (
    gapi_dataWriter handle
) : ::DDS::DataWriter_impl(handle)
{
    // Parent constructor takes care of everything.
}

DDS::ParticipantBuiltinTopicDataDataWriter_impl::~ParticipantBuiltinTopicDataDataWriter_impl(void)
{
    // Parent destructor takes care of everything.
}

::DDS::InstanceHandle_t
DDS::ParticipantBuiltinTopicDataDataWriter_impl::register_instance(
    const DDS::ParticipantBuiltinTopicData & instance_data) THROW_ORB_EXCEPTIONS
{
    return DataWriter_impl::register_instance(&instance_data);
}

::DDS::InstanceHandle_t
DDS::ParticipantBuiltinTopicDataDataWriter_impl::register_instance_w_timestamp(
    const ParticipantBuiltinTopicData & instance_data,
    const ::DDS::Time_t & source_timestamp) THROW_ORB_EXCEPTIONS
{
    return DataWriter_impl::register_instance_w_timestamp(&instance_data, source_timestamp);
}

::DDS::ReturnCode_t
DDS::ParticipantBuiltinTopicDataDataWriter_impl::unregister_instance(
    const DDS::ParticipantBuiltinTopicData & instance_data,
    ::DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS
{
    return DataWriter_impl::unregister_instance(&instance_data, handle);
}

::DDS::ReturnCode_t
DDS::ParticipantBuiltinTopicDataDataWriter_impl::unregister_instance_w_timestamp(
    const ParticipantBuiltinTopicData & instance_data,
    ::DDS::InstanceHandle_t handle,
    const ::DDS::Time_t & source_timestamp) THROW_ORB_EXCEPTIONS
{
    return DataWriter_impl::unregister_instance_w_timestamp(&instance_data, handle, source_timestamp);
}

::DDS::ReturnCode_t
DDS::ParticipantBuiltinTopicDataDataWriter_impl::write(
    const DDS::ParticipantBuiltinTopicData & instance_data,
    ::DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS
{
    return DataWriter_impl::write(&instance_data, handle);
}

::DDS::ReturnCode_t
DDS::ParticipantBuiltinTopicDataDataWriter_impl::write_w_timestamp(
    const ParticipantBuiltinTopicData & instance_data,
    ::DDS::InstanceHandle_t handle,
    const ::DDS::Time_t & source_timestamp) THROW_ORB_EXCEPTIONS
{
    return DataWriter_impl::write_w_timestamp(&instance_data, handle, source_timestamp);
}

::DDS::ReturnCode_t
DDS::ParticipantBuiltinTopicDataDataWriter_impl::dispose(
    const DDS::ParticipantBuiltinTopicData & instance_data,
    ::DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS
{
    return DataWriter_impl::dispose(&instance_data, handle);
}

::DDS::ReturnCode_t
DDS::ParticipantBuiltinTopicDataDataWriter_impl::dispose_w_timestamp(
    const ParticipantBuiltinTopicData & instance_data,
    ::DDS::InstanceHandle_t handle,
    const ::DDS::Time_t & source_timestamp) THROW_ORB_EXCEPTIONS
{
    return DataWriter_impl::dispose_w_timestamp(&instance_data, handle, source_timestamp);
}

::DDS::ReturnCode_t
DDS::ParticipantBuiltinTopicDataDataWriter_impl::writedispose(
    const DDS::ParticipantBuiltinTopicData & instance_data,
    ::DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS
{
    return DataWriter_impl::writedispose(&instance_data, handle);
}

::DDS::ReturnCode_t
DDS::ParticipantBuiltinTopicDataDataWriter_impl::writedispose_w_timestamp(
    const ParticipantBuiltinTopicData & instance_data,
    ::DDS::InstanceHandle_t handle,
    const ::DDS::Time_t & source_timestamp) THROW_ORB_EXCEPTIONS
{
    return DataWriter_impl::writedispose_w_timestamp(&instance_data, handle, source_timestamp);
}

::DDS::ReturnCode_t
DDS::ParticipantBuiltinTopicDataDataWriter_impl::get_key_value(
    ParticipantBuiltinTopicData & key_holder,
    ::DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS
{
    return DataWriter_impl::get_key_value(&key_holder, handle);
}

::DDS::InstanceHandle_t
DDS::ParticipantBuiltinTopicDataDataWriter_impl::lookup_instance(
    const DDS::ParticipantBuiltinTopicData & instance_data) THROW_ORB_EXCEPTIONS
{
    return DataWriter_impl::lookup_instance(&instance_data);
}

// DDS DDS::ParticipantBuiltinTopicData DataReader_impl Object Body

DDS::ParticipantBuiltinTopicDataDataReader_impl::ParticipantBuiltinTopicDataDataReader_impl (
    gapi_dataReader handle
) : ::DDS::DataReader_impl(handle, ::DDS::ccpp_DataReaderParallelDemarshallingMain<DDS::ParticipantBuiltinTopicDataSeq>)
{
    // Parent constructor takes care of everything.
}

DDS::ParticipantBuiltinTopicDataDataReader_impl::~ParticipantBuiltinTopicDataDataReader_impl(void)
{
    // Parent destructor takes care of everything.
}


::DDS::ReturnCode_t
DDS::ParticipantBuiltinTopicDataDataReader_impl::read(
    DDS::ParticipantBuiltinTopicDataSeq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::SampleStateMask sample_states,
    ::DDS::ViewStateMask view_states,
    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DataReader_impl::read(&received_data, info_seq, max_samples, sample_states, view_states, instance_states);
    }
    return status;
}

::DDS::ReturnCode_t
DDS::ParticipantBuiltinTopicDataDataReader_impl::take(
    DDS::ParticipantBuiltinTopicDataSeq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::SampleStateMask sample_states,
    ::DDS::ViewStateMask view_states,
    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DataReader_impl::take(&received_data, info_seq, max_samples, sample_states, view_states, instance_states);
    }
    return status;
}

::DDS::ReturnCode_t
DDS::ParticipantBuiltinTopicDataDataReader_impl::read_w_condition(
    DDS::ParticipantBuiltinTopicDataSeq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DataReader_impl::read_w_condition(&received_data, info_seq, max_samples, a_condition);
    }
    return status;
}

::DDS::ReturnCode_t
DDS::ParticipantBuiltinTopicDataDataReader_impl::take_w_condition(
    DDS::ParticipantBuiltinTopicDataSeq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DataReader_impl::take_w_condition(&received_data, info_seq, max_samples, a_condition);
    }
    return status;
}


::DDS::ReturnCode_t
DDS::ParticipantBuiltinTopicDataDataReader_impl::read_next_sample(
    DDS::ParticipantBuiltinTopicData & received_data,
    ::DDS::SampleInfo & sample_info) THROW_ORB_EXCEPTIONS
{
    return DataReader_impl::read_next_sample(&received_data, sample_info);
}


::DDS::ReturnCode_t
DDS::ParticipantBuiltinTopicDataDataReader_impl::take_next_sample(
    DDS::ParticipantBuiltinTopicData & received_data,
    ::DDS::SampleInfo & sample_info) THROW_ORB_EXCEPTIONS
{
    return DataReader_impl::take_next_sample(&received_data, sample_info);
}


::DDS::ReturnCode_t
DDS::ParticipantBuiltinTopicDataDataReader_impl::read_instance(
    DDS::ParticipantBuiltinTopicDataSeq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::InstanceHandle_t a_handle,
    ::DDS::SampleStateMask sample_states,
    ::DDS::ViewStateMask view_states,
    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DataReader_impl::read_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}

::DDS::ReturnCode_t
DDS::ParticipantBuiltinTopicDataDataReader_impl::take_instance(
    DDS::ParticipantBuiltinTopicDataSeq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::InstanceHandle_t a_handle,
    ::DDS::SampleStateMask sample_states,
    ::DDS::ViewStateMask view_states,
    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DataReader_impl::take_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}

::DDS::ReturnCode_t
DDS::ParticipantBuiltinTopicDataDataReader_impl::read_next_instance(
    DDS::ParticipantBuiltinTopicDataSeq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::InstanceHandle_t a_handle,
    ::DDS::SampleStateMask sample_states,
    ::DDS::ViewStateMask view_states,
    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DataReader_impl::read_next_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}

::DDS::ReturnCode_t
DDS::ParticipantBuiltinTopicDataDataReader_impl::take_next_instance(
    DDS::ParticipantBuiltinTopicDataSeq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::InstanceHandle_t a_handle,
    ::DDS::SampleStateMask sample_states,
    ::DDS::ViewStateMask view_states,
    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DataReader_impl::take_next_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}


::DDS::ReturnCode_t
DDS::ParticipantBuiltinTopicDataDataReader_impl::read_next_instance_w_condition(
    DDS::ParticipantBuiltinTopicDataSeq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::InstanceHandle_t a_handle,
    ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DataReader_impl::read_next_instance_w_condition(&received_data, info_seq, max_samples, a_handle, a_condition);
    }
    return status;
}


::DDS::ReturnCode_t
DDS::ParticipantBuiltinTopicDataDataReader_impl::take_next_instance_w_condition(
    DDS::ParticipantBuiltinTopicDataSeq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::InstanceHandle_t a_handle,
    ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DataReader_impl::take_next_instance_w_condition(&received_data, info_seq, max_samples, a_handle, a_condition);
    }
    return status;
}


::DDS::ReturnCode_t
DDS::ParticipantBuiltinTopicDataDataReader_impl::return_loan(
    DDS::ParticipantBuiltinTopicDataSeq & received_data,
    ::DDS::SampleInfoSeq & info_seq) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status = ::DDS::RETCODE_OK;

    if ( received_data.length() > 0 ) {
        if (received_data.length() == info_seq.length() &&
            received_data.release() == info_seq.release() ) {
            if (!received_data.release()) {
                status = DataReader_impl::return_loan( received_data.get_buffer(),
                                                       info_seq.get_buffer() );

                if ( status == ::DDS::RETCODE_OK ) {
                    if ( !received_data.release() ) {
                        DDS::ParticipantBuiltinTopicDataSeq::freebuf( received_data.get_buffer(false) );
                        received_data.replace(0, 0, NULL, false);
                        ::DDS::SampleInfoSeq::freebuf( info_seq.get_buffer(false) );
                        info_seq.replace(0, 0, NULL, false);
                    }
                } else if ( status == ::DDS::RETCODE_NO_DATA ) {
                    if ( received_data.release() ) {
                        status = ::DDS::RETCODE_OK;
                    } else {
                        status = ::DDS::RETCODE_PRECONDITION_NOT_MET;
                    }
                }
            }
        } else {
            status = ::DDS::RETCODE_PRECONDITION_NOT_MET;
        }
    }
    return status;
}


::DDS::ReturnCode_t
DDS::ParticipantBuiltinTopicDataDataReader_impl::get_key_value(
    DDS::ParticipantBuiltinTopicData & key_holder,
    ::DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS
{
    return DataReader_impl::get_key_value(&key_holder, handle);
}

::DDS::InstanceHandle_t
DDS::ParticipantBuiltinTopicDataDataReader_impl::lookup_instance(
    const DDS::ParticipantBuiltinTopicData & instance) THROW_ORB_EXCEPTIONS
{
    return DataReader_impl::lookup_instance(&instance);
}

::DDS::ReturnCode_t
DDS::ParticipantBuiltinTopicDataDataReader_impl::check_preconditions(
    DDS::ParticipantBuiltinTopicDataSeq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples)
{
    ::DDS::ReturnCode_t status = ::DDS::RETCODE_PRECONDITION_NOT_MET;

    if ( received_data.length() == info_seq.length() &&
         received_data.maximum() == info_seq.maximum() &&
         received_data.release() == info_seq.release() ) {
        if ( received_data.maximum() == 0 || received_data.release() ) {
            if (received_data.maximum() == 0 ||
                max_samples <= static_cast<DDS::Long>(received_data.maximum()) ||
                max_samples == ::DDS::LENGTH_UNLIMITED ) {
                status = ::DDS::RETCODE_OK;
            }
        }
    }
    return status;
}


// DDS DDS::ParticipantBuiltinTopicData DataReaderView_impl Object Body

DDS::ParticipantBuiltinTopicDataDataReaderView_impl::ParticipantBuiltinTopicDataDataReaderView_impl (
    gapi_dataReaderView handle
) : ::DDS::DataReaderView_impl(handle)
{
    // Parent constructor takes care of everything.
}

DDS::ParticipantBuiltinTopicDataDataReaderView_impl::~ParticipantBuiltinTopicDataDataReaderView_impl(void)
{
    // Parent destructor takes care of everything.
}


::DDS::ReturnCode_t
DDS::ParticipantBuiltinTopicDataDataReaderView_impl::read(
    DDS::ParticipantBuiltinTopicDataSeq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::SampleStateMask sample_states,
    ::DDS::ViewStateMask view_states,
    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = DDS::ParticipantBuiltinTopicDataDataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DataReaderView_impl::read(&received_data, info_seq, max_samples, sample_states, view_states, instance_states);
    }
    return status;
}

::DDS::ReturnCode_t
DDS::ParticipantBuiltinTopicDataDataReaderView_impl::take(
    DDS::ParticipantBuiltinTopicDataSeq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::SampleStateMask sample_states,
    ::DDS::ViewStateMask view_states,
    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = DDS::ParticipantBuiltinTopicDataDataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DataReaderView_impl::take(&received_data, info_seq, max_samples, sample_states, view_states, instance_states);
    }
    return status;
}

::DDS::ReturnCode_t
DDS::ParticipantBuiltinTopicDataDataReaderView_impl::read_w_condition(
    DDS::ParticipantBuiltinTopicDataSeq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = DDS::ParticipantBuiltinTopicDataDataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DataReaderView_impl::read_w_condition(&received_data, info_seq, max_samples, a_condition);
    }
    return status;
}

::DDS::ReturnCode_t
DDS::ParticipantBuiltinTopicDataDataReaderView_impl::take_w_condition(
    DDS::ParticipantBuiltinTopicDataSeq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = DDS::ParticipantBuiltinTopicDataDataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DataReaderView_impl::take_w_condition(&received_data, info_seq, max_samples, a_condition);
    }
    return status;
}


::DDS::ReturnCode_t
DDS::ParticipantBuiltinTopicDataDataReaderView_impl::read_next_sample(
    DDS::ParticipantBuiltinTopicData & received_data,
    ::DDS::SampleInfo & sample_info) THROW_ORB_EXCEPTIONS
{
    return DataReaderView_impl::read_next_sample(&received_data, sample_info);
}


::DDS::ReturnCode_t
DDS::ParticipantBuiltinTopicDataDataReaderView_impl::take_next_sample(
    DDS::ParticipantBuiltinTopicData & received_data,
    ::DDS::SampleInfo & sample_info) THROW_ORB_EXCEPTIONS
{
    return DataReaderView_impl::take_next_sample(&received_data, sample_info);
}


::DDS::ReturnCode_t
DDS::ParticipantBuiltinTopicDataDataReaderView_impl::read_instance(
    DDS::ParticipantBuiltinTopicDataSeq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::InstanceHandle_t a_handle,
    ::DDS::SampleStateMask sample_states,
    ::DDS::ViewStateMask view_states,
    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = DDS::ParticipantBuiltinTopicDataDataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DataReaderView_impl::read_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}

::DDS::ReturnCode_t
DDS::ParticipantBuiltinTopicDataDataReaderView_impl::take_instance(
    DDS::ParticipantBuiltinTopicDataSeq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::InstanceHandle_t a_handle,
    ::DDS::SampleStateMask sample_states,
    ::DDS::ViewStateMask view_states,
    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = DDS::ParticipantBuiltinTopicDataDataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DataReaderView_impl::take_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}

::DDS::ReturnCode_t
DDS::ParticipantBuiltinTopicDataDataReaderView_impl::read_next_instance(
    DDS::ParticipantBuiltinTopicDataSeq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::InstanceHandle_t a_handle,
    ::DDS::SampleStateMask sample_states,
    ::DDS::ViewStateMask view_states,
    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = DDS::ParticipantBuiltinTopicDataDataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DataReaderView_impl::read_next_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}

::DDS::ReturnCode_t
DDS::ParticipantBuiltinTopicDataDataReaderView_impl::take_next_instance(
    DDS::ParticipantBuiltinTopicDataSeq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::InstanceHandle_t a_handle,
    ::DDS::SampleStateMask sample_states,
    ::DDS::ViewStateMask view_states,
    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = DDS::ParticipantBuiltinTopicDataDataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DataReaderView_impl::take_next_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}


::DDS::ReturnCode_t
DDS::ParticipantBuiltinTopicDataDataReaderView_impl::read_next_instance_w_condition(
    DDS::ParticipantBuiltinTopicDataSeq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::InstanceHandle_t a_handle,
    ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = DDS::ParticipantBuiltinTopicDataDataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DataReaderView_impl::read_next_instance_w_condition(&received_data, info_seq, max_samples, a_handle, a_condition);
    }
    return status;
}


::DDS::ReturnCode_t
DDS::ParticipantBuiltinTopicDataDataReaderView_impl::take_next_instance_w_condition(
    DDS::ParticipantBuiltinTopicDataSeq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::InstanceHandle_t a_handle,
    ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = DDS::ParticipantBuiltinTopicDataDataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DataReaderView_impl::take_next_instance_w_condition(&received_data, info_seq, max_samples, a_handle, a_condition);
    }
    return status;
}


::DDS::ReturnCode_t
DDS::ParticipantBuiltinTopicDataDataReaderView_impl::return_loan(
    DDS::ParticipantBuiltinTopicDataSeq & received_data,
    ::DDS::SampleInfoSeq & info_seq) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status = ::DDS::RETCODE_OK;

    if ( received_data.length() > 0 ) {
        if (received_data.length() == info_seq.length() &&
            received_data.release() == info_seq.release() ) {
            if (!received_data.release()) {
                status = DataReaderView_impl::return_loan( received_data.get_buffer(),
                                                       info_seq.get_buffer() );

                if ( status == ::DDS::RETCODE_OK ) {
                    if ( !received_data.release() ) {
                        DDS::ParticipantBuiltinTopicDataSeq::freebuf( received_data.get_buffer(false) );
                        received_data.replace(0, 0, NULL, false);
                        ::DDS::SampleInfoSeq::freebuf( info_seq.get_buffer(false) );
                        info_seq.replace(0, 0, NULL, false);
                    }
                } else if ( status == ::DDS::RETCODE_NO_DATA ) {
                    if ( received_data.release() ) {
                        status = ::DDS::RETCODE_OK;
                    } else {
                        status = ::DDS::RETCODE_PRECONDITION_NOT_MET;
                    }
                }
            }
        } else {
            status = ::DDS::RETCODE_PRECONDITION_NOT_MET;
        }
    }
    return status;
}


::DDS::ReturnCode_t
DDS::ParticipantBuiltinTopicDataDataReaderView_impl::get_key_value(
    DDS::ParticipantBuiltinTopicData & key_holder,
    ::DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS
{
    return DataReaderView_impl::get_key_value(&key_holder, handle);
}

::DDS::InstanceHandle_t
DDS::ParticipantBuiltinTopicDataDataReaderView_impl::lookup_instance(
    const DDS::ParticipantBuiltinTopicData & instance) THROW_ORB_EXCEPTIONS
{
    return DataReaderView_impl::lookup_instance(&instance);
}



extern c_bool
__DDS_TopicBuiltinTopicData__copyIn(
    c_base base,
    struct DDS::TopicBuiltinTopicData *from,
    struct _DDS_TopicBuiltinTopicData *to);

extern void
__DDS_TopicBuiltinTopicData__copyOut(
    void *_from,
    void *_to);

// DDS DDS::TopicBuiltinTopicData TypeSupportFactory Object Body

::DDS::DataWriter_ptr
DDS::TopicBuiltinTopicDataTypeSupportFactory::create_datawriter (gapi_dataWriter handle)
{
    return new DDS::TopicBuiltinTopicDataDataWriter_impl(handle);
}

::DDS::DataReader_ptr
DDS::TopicBuiltinTopicDataTypeSupportFactory::create_datareader (gapi_dataReader handle)
{
    return new DDS::TopicBuiltinTopicDataDataReader_impl (handle);
}


::DDS::DataReaderView_ptr
DDS::TopicBuiltinTopicDataTypeSupportFactory::create_view (gapi_dataReaderView handle)
{
    return new DDS::TopicBuiltinTopicDataDataReaderView_impl (handle);
}

// DDS DDS::TopicBuiltinTopicData TypeSupport Object Body

DDS::TopicBuiltinTopicDataTypeSupport::TopicBuiltinTopicDataTypeSupport(void) :
    TypeSupport_impl(
        __DDS_TopicBuiltinTopicData__name(),
        __DDS_TopicBuiltinTopicData__keys(),
        DDS::TopicBuiltinTopicDataTypeSupport::metaDescriptor,
        (gapi_copyIn) __DDS_TopicBuiltinTopicData__copyIn,
        (gapi_copyOut) __DDS_TopicBuiltinTopicData__copyOut,
        (gapi_readerCopy) ::DDS::ccpp_DataReaderCopy<DDS::TopicBuiltinTopicDataSeq, DDS::TopicBuiltinTopicData>,
        new  DDS::TopicBuiltinTopicDataTypeSupportFactory(),
        DDS::TopicBuiltinTopicDataTypeSupport::metaDescriptorArrLength)
{
    // Parent constructor takes care of everything.
}

DDS::TopicBuiltinTopicDataTypeSupport::~TopicBuiltinTopicDataTypeSupport(void)
{
    // Parent destructor takes care of everything.
}

::DDS::ReturnCode_t
DDS::TopicBuiltinTopicDataTypeSupport::register_type(
    ::DDS::DomainParticipant_ptr domain,
    const char * type_name) THROW_ORB_EXCEPTIONS
{
    return TypeSupport_impl::register_type(domain, type_name);
}

char *
DDS::TopicBuiltinTopicDataTypeSupport::get_type_name() THROW_ORB_EXCEPTIONS
{
    return TypeSupport_impl::get_type_name();
}

// DDS DDS::TopicBuiltinTopicData DataWriter_impl Object Body

DDS::TopicBuiltinTopicDataDataWriter_impl::TopicBuiltinTopicDataDataWriter_impl (
    gapi_dataWriter handle
) : ::DDS::DataWriter_impl(handle)
{
    // Parent constructor takes care of everything.
}

DDS::TopicBuiltinTopicDataDataWriter_impl::~TopicBuiltinTopicDataDataWriter_impl(void)
{
    // Parent destructor takes care of everything.
}

::DDS::InstanceHandle_t
DDS::TopicBuiltinTopicDataDataWriter_impl::register_instance(
    const DDS::TopicBuiltinTopicData & instance_data) THROW_ORB_EXCEPTIONS
{
    return DataWriter_impl::register_instance(&instance_data);
}

::DDS::InstanceHandle_t
DDS::TopicBuiltinTopicDataDataWriter_impl::register_instance_w_timestamp(
    const TopicBuiltinTopicData & instance_data,
    const ::DDS::Time_t & source_timestamp) THROW_ORB_EXCEPTIONS
{
    return DataWriter_impl::register_instance_w_timestamp(&instance_data, source_timestamp);
}

::DDS::ReturnCode_t
DDS::TopicBuiltinTopicDataDataWriter_impl::unregister_instance(
    const DDS::TopicBuiltinTopicData & instance_data,
    ::DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS
{
    return DataWriter_impl::unregister_instance(&instance_data, handle);
}

::DDS::ReturnCode_t
DDS::TopicBuiltinTopicDataDataWriter_impl::unregister_instance_w_timestamp(
    const TopicBuiltinTopicData & instance_data,
    ::DDS::InstanceHandle_t handle,
    const ::DDS::Time_t & source_timestamp) THROW_ORB_EXCEPTIONS
{
    return DataWriter_impl::unregister_instance_w_timestamp(&instance_data, handle, source_timestamp);
}

::DDS::ReturnCode_t
DDS::TopicBuiltinTopicDataDataWriter_impl::write(
    const DDS::TopicBuiltinTopicData & instance_data,
    ::DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS
{
    return DataWriter_impl::write(&instance_data, handle);
}

::DDS::ReturnCode_t
DDS::TopicBuiltinTopicDataDataWriter_impl::write_w_timestamp(
    const TopicBuiltinTopicData & instance_data,
    ::DDS::InstanceHandle_t handle,
    const ::DDS::Time_t & source_timestamp) THROW_ORB_EXCEPTIONS
{
    return DataWriter_impl::write_w_timestamp(&instance_data, handle, source_timestamp);
}

::DDS::ReturnCode_t
DDS::TopicBuiltinTopicDataDataWriter_impl::dispose(
    const DDS::TopicBuiltinTopicData & instance_data,
    ::DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS
{
    return DataWriter_impl::dispose(&instance_data, handle);
}

::DDS::ReturnCode_t
DDS::TopicBuiltinTopicDataDataWriter_impl::dispose_w_timestamp(
    const TopicBuiltinTopicData & instance_data,
    ::DDS::InstanceHandle_t handle,
    const ::DDS::Time_t & source_timestamp) THROW_ORB_EXCEPTIONS
{
    return DataWriter_impl::dispose_w_timestamp(&instance_data, handle, source_timestamp);
}

::DDS::ReturnCode_t
DDS::TopicBuiltinTopicDataDataWriter_impl::writedispose(
    const DDS::TopicBuiltinTopicData & instance_data,
    ::DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS
{
    return DataWriter_impl::writedispose(&instance_data, handle);
}

::DDS::ReturnCode_t
DDS::TopicBuiltinTopicDataDataWriter_impl::writedispose_w_timestamp(
    const TopicBuiltinTopicData & instance_data,
    ::DDS::InstanceHandle_t handle,
    const ::DDS::Time_t & source_timestamp) THROW_ORB_EXCEPTIONS
{
    return DataWriter_impl::writedispose_w_timestamp(&instance_data, handle, source_timestamp);
}

::DDS::ReturnCode_t
DDS::TopicBuiltinTopicDataDataWriter_impl::get_key_value(
    TopicBuiltinTopicData & key_holder,
    ::DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS
{
    return DataWriter_impl::get_key_value(&key_holder, handle);
}

::DDS::InstanceHandle_t
DDS::TopicBuiltinTopicDataDataWriter_impl::lookup_instance(
    const DDS::TopicBuiltinTopicData & instance_data) THROW_ORB_EXCEPTIONS
{
    return DataWriter_impl::lookup_instance(&instance_data);
}

// DDS DDS::TopicBuiltinTopicData DataReader_impl Object Body

DDS::TopicBuiltinTopicDataDataReader_impl::TopicBuiltinTopicDataDataReader_impl (
    gapi_dataReader handle
) : ::DDS::DataReader_impl(handle, ::DDS::ccpp_DataReaderParallelDemarshallingMain<DDS::TopicBuiltinTopicDataSeq>)
{
    // Parent constructor takes care of everything.
}

DDS::TopicBuiltinTopicDataDataReader_impl::~TopicBuiltinTopicDataDataReader_impl(void)
{
    // Parent destructor takes care of everything.
}


::DDS::ReturnCode_t
DDS::TopicBuiltinTopicDataDataReader_impl::read(
    DDS::TopicBuiltinTopicDataSeq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::SampleStateMask sample_states,
    ::DDS::ViewStateMask view_states,
    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DataReader_impl::read(&received_data, info_seq, max_samples, sample_states, view_states, instance_states);
    }
    return status;
}

::DDS::ReturnCode_t
DDS::TopicBuiltinTopicDataDataReader_impl::take(
    DDS::TopicBuiltinTopicDataSeq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::SampleStateMask sample_states,
    ::DDS::ViewStateMask view_states,
    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DataReader_impl::take(&received_data, info_seq, max_samples, sample_states, view_states, instance_states);
    }
    return status;
}

::DDS::ReturnCode_t
DDS::TopicBuiltinTopicDataDataReader_impl::read_w_condition(
    DDS::TopicBuiltinTopicDataSeq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DataReader_impl::read_w_condition(&received_data, info_seq, max_samples, a_condition);
    }
    return status;
}

::DDS::ReturnCode_t
DDS::TopicBuiltinTopicDataDataReader_impl::take_w_condition(
    DDS::TopicBuiltinTopicDataSeq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DataReader_impl::take_w_condition(&received_data, info_seq, max_samples, a_condition);
    }
    return status;
}


::DDS::ReturnCode_t
DDS::TopicBuiltinTopicDataDataReader_impl::read_next_sample(
    DDS::TopicBuiltinTopicData & received_data,
    ::DDS::SampleInfo & sample_info) THROW_ORB_EXCEPTIONS
{
    return DataReader_impl::read_next_sample(&received_data, sample_info);
}


::DDS::ReturnCode_t
DDS::TopicBuiltinTopicDataDataReader_impl::take_next_sample(
    DDS::TopicBuiltinTopicData & received_data,
    ::DDS::SampleInfo & sample_info) THROW_ORB_EXCEPTIONS
{
    return DataReader_impl::take_next_sample(&received_data, sample_info);
}


::DDS::ReturnCode_t
DDS::TopicBuiltinTopicDataDataReader_impl::read_instance(
    DDS::TopicBuiltinTopicDataSeq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::InstanceHandle_t a_handle,
    ::DDS::SampleStateMask sample_states,
    ::DDS::ViewStateMask view_states,
    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DataReader_impl::read_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}

::DDS::ReturnCode_t
DDS::TopicBuiltinTopicDataDataReader_impl::take_instance(
    DDS::TopicBuiltinTopicDataSeq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::InstanceHandle_t a_handle,
    ::DDS::SampleStateMask sample_states,
    ::DDS::ViewStateMask view_states,
    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DataReader_impl::take_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}

::DDS::ReturnCode_t
DDS::TopicBuiltinTopicDataDataReader_impl::read_next_instance(
    DDS::TopicBuiltinTopicDataSeq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::InstanceHandle_t a_handle,
    ::DDS::SampleStateMask sample_states,
    ::DDS::ViewStateMask view_states,
    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DataReader_impl::read_next_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}

::DDS::ReturnCode_t
DDS::TopicBuiltinTopicDataDataReader_impl::take_next_instance(
    DDS::TopicBuiltinTopicDataSeq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::InstanceHandle_t a_handle,
    ::DDS::SampleStateMask sample_states,
    ::DDS::ViewStateMask view_states,
    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DataReader_impl::take_next_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}


::DDS::ReturnCode_t
DDS::TopicBuiltinTopicDataDataReader_impl::read_next_instance_w_condition(
    DDS::TopicBuiltinTopicDataSeq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::InstanceHandle_t a_handle,
    ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DataReader_impl::read_next_instance_w_condition(&received_data, info_seq, max_samples, a_handle, a_condition);
    }
    return status;
}


::DDS::ReturnCode_t
DDS::TopicBuiltinTopicDataDataReader_impl::take_next_instance_w_condition(
    DDS::TopicBuiltinTopicDataSeq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::InstanceHandle_t a_handle,
    ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DataReader_impl::take_next_instance_w_condition(&received_data, info_seq, max_samples, a_handle, a_condition);
    }
    return status;
}


::DDS::ReturnCode_t
DDS::TopicBuiltinTopicDataDataReader_impl::return_loan(
    DDS::TopicBuiltinTopicDataSeq & received_data,
    ::DDS::SampleInfoSeq & info_seq) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status = ::DDS::RETCODE_OK;

    if ( received_data.length() > 0 ) {
        if (received_data.length() == info_seq.length() &&
            received_data.release() == info_seq.release() ) {
            if (!received_data.release()) {
                status = DataReader_impl::return_loan( received_data.get_buffer(),
                                                       info_seq.get_buffer() );

                if ( status == ::DDS::RETCODE_OK ) {
                    if ( !received_data.release() ) {
                        DDS::TopicBuiltinTopicDataSeq::freebuf( received_data.get_buffer(false) );
                        received_data.replace(0, 0, NULL, false);
                        ::DDS::SampleInfoSeq::freebuf( info_seq.get_buffer(false) );
                        info_seq.replace(0, 0, NULL, false);
                    }
                } else if ( status == ::DDS::RETCODE_NO_DATA ) {
                    if ( received_data.release() ) {
                        status = ::DDS::RETCODE_OK;
                    } else {
                        status = ::DDS::RETCODE_PRECONDITION_NOT_MET;
                    }
                }
            }
        } else {
            status = ::DDS::RETCODE_PRECONDITION_NOT_MET;
        }
    }
    return status;
}


::DDS::ReturnCode_t
DDS::TopicBuiltinTopicDataDataReader_impl::get_key_value(
    DDS::TopicBuiltinTopicData & key_holder,
    ::DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS
{
    return DataReader_impl::get_key_value(&key_holder, handle);
}

::DDS::InstanceHandle_t
DDS::TopicBuiltinTopicDataDataReader_impl::lookup_instance(
    const DDS::TopicBuiltinTopicData & instance) THROW_ORB_EXCEPTIONS
{
    return DataReader_impl::lookup_instance(&instance);
}

::DDS::ReturnCode_t
DDS::TopicBuiltinTopicDataDataReader_impl::check_preconditions(
    DDS::TopicBuiltinTopicDataSeq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples)
{
    ::DDS::ReturnCode_t status = ::DDS::RETCODE_PRECONDITION_NOT_MET;

    if ( received_data.length() == info_seq.length() &&
         received_data.maximum() == info_seq.maximum() &&
         received_data.release() == info_seq.release() ) {
        if ( received_data.maximum() == 0 || received_data.release() ) {
            if (received_data.maximum() == 0 ||
                max_samples <= static_cast<DDS::Long>(received_data.maximum()) ||
                max_samples == ::DDS::LENGTH_UNLIMITED ) {
                status = ::DDS::RETCODE_OK;
            }
        }
    }
    return status;
}


// DDS DDS::TopicBuiltinTopicData DataReaderView_impl Object Body

DDS::TopicBuiltinTopicDataDataReaderView_impl::TopicBuiltinTopicDataDataReaderView_impl (
    gapi_dataReaderView handle
) : ::DDS::DataReaderView_impl(handle)
{
    // Parent constructor takes care of everything.
}

DDS::TopicBuiltinTopicDataDataReaderView_impl::~TopicBuiltinTopicDataDataReaderView_impl(void)
{
    // Parent destructor takes care of everything.
}


::DDS::ReturnCode_t
DDS::TopicBuiltinTopicDataDataReaderView_impl::read(
    DDS::TopicBuiltinTopicDataSeq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::SampleStateMask sample_states,
    ::DDS::ViewStateMask view_states,
    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = DDS::TopicBuiltinTopicDataDataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DataReaderView_impl::read(&received_data, info_seq, max_samples, sample_states, view_states, instance_states);
    }
    return status;
}

::DDS::ReturnCode_t
DDS::TopicBuiltinTopicDataDataReaderView_impl::take(
    DDS::TopicBuiltinTopicDataSeq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::SampleStateMask sample_states,
    ::DDS::ViewStateMask view_states,
    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = DDS::TopicBuiltinTopicDataDataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DataReaderView_impl::take(&received_data, info_seq, max_samples, sample_states, view_states, instance_states);
    }
    return status;
}

::DDS::ReturnCode_t
DDS::TopicBuiltinTopicDataDataReaderView_impl::read_w_condition(
    DDS::TopicBuiltinTopicDataSeq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = DDS::TopicBuiltinTopicDataDataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DataReaderView_impl::read_w_condition(&received_data, info_seq, max_samples, a_condition);
    }
    return status;
}

::DDS::ReturnCode_t
DDS::TopicBuiltinTopicDataDataReaderView_impl::take_w_condition(
    DDS::TopicBuiltinTopicDataSeq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = DDS::TopicBuiltinTopicDataDataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DataReaderView_impl::take_w_condition(&received_data, info_seq, max_samples, a_condition);
    }
    return status;
}


::DDS::ReturnCode_t
DDS::TopicBuiltinTopicDataDataReaderView_impl::read_next_sample(
    DDS::TopicBuiltinTopicData & received_data,
    ::DDS::SampleInfo & sample_info) THROW_ORB_EXCEPTIONS
{
    return DataReaderView_impl::read_next_sample(&received_data, sample_info);
}


::DDS::ReturnCode_t
DDS::TopicBuiltinTopicDataDataReaderView_impl::take_next_sample(
    DDS::TopicBuiltinTopicData & received_data,
    ::DDS::SampleInfo & sample_info) THROW_ORB_EXCEPTIONS
{
    return DataReaderView_impl::take_next_sample(&received_data, sample_info);
}


::DDS::ReturnCode_t
DDS::TopicBuiltinTopicDataDataReaderView_impl::read_instance(
    DDS::TopicBuiltinTopicDataSeq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::InstanceHandle_t a_handle,
    ::DDS::SampleStateMask sample_states,
    ::DDS::ViewStateMask view_states,
    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = DDS::TopicBuiltinTopicDataDataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DataReaderView_impl::read_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}

::DDS::ReturnCode_t
DDS::TopicBuiltinTopicDataDataReaderView_impl::take_instance(
    DDS::TopicBuiltinTopicDataSeq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::InstanceHandle_t a_handle,
    ::DDS::SampleStateMask sample_states,
    ::DDS::ViewStateMask view_states,
    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = DDS::TopicBuiltinTopicDataDataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DataReaderView_impl::take_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}

::DDS::ReturnCode_t
DDS::TopicBuiltinTopicDataDataReaderView_impl::read_next_instance(
    DDS::TopicBuiltinTopicDataSeq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::InstanceHandle_t a_handle,
    ::DDS::SampleStateMask sample_states,
    ::DDS::ViewStateMask view_states,
    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = DDS::TopicBuiltinTopicDataDataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DataReaderView_impl::read_next_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}

::DDS::ReturnCode_t
DDS::TopicBuiltinTopicDataDataReaderView_impl::take_next_instance(
    DDS::TopicBuiltinTopicDataSeq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::InstanceHandle_t a_handle,
    ::DDS::SampleStateMask sample_states,
    ::DDS::ViewStateMask view_states,
    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = DDS::TopicBuiltinTopicDataDataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DataReaderView_impl::take_next_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}


::DDS::ReturnCode_t
DDS::TopicBuiltinTopicDataDataReaderView_impl::read_next_instance_w_condition(
    DDS::TopicBuiltinTopicDataSeq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::InstanceHandle_t a_handle,
    ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = DDS::TopicBuiltinTopicDataDataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DataReaderView_impl::read_next_instance_w_condition(&received_data, info_seq, max_samples, a_handle, a_condition);
    }
    return status;
}


::DDS::ReturnCode_t
DDS::TopicBuiltinTopicDataDataReaderView_impl::take_next_instance_w_condition(
    DDS::TopicBuiltinTopicDataSeq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::InstanceHandle_t a_handle,
    ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = DDS::TopicBuiltinTopicDataDataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DataReaderView_impl::take_next_instance_w_condition(&received_data, info_seq, max_samples, a_handle, a_condition);
    }
    return status;
}


::DDS::ReturnCode_t
DDS::TopicBuiltinTopicDataDataReaderView_impl::return_loan(
    DDS::TopicBuiltinTopicDataSeq & received_data,
    ::DDS::SampleInfoSeq & info_seq) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status = ::DDS::RETCODE_OK;

    if ( received_data.length() > 0 ) {
        if (received_data.length() == info_seq.length() &&
            received_data.release() == info_seq.release() ) {
            if (!received_data.release()) {
                status = DataReaderView_impl::return_loan( received_data.get_buffer(),
                                                       info_seq.get_buffer() );

                if ( status == ::DDS::RETCODE_OK ) {
                    if ( !received_data.release() ) {
                        DDS::TopicBuiltinTopicDataSeq::freebuf( received_data.get_buffer(false) );
                        received_data.replace(0, 0, NULL, false);
                        ::DDS::SampleInfoSeq::freebuf( info_seq.get_buffer(false) );
                        info_seq.replace(0, 0, NULL, false);
                    }
                } else if ( status == ::DDS::RETCODE_NO_DATA ) {
                    if ( received_data.release() ) {
                        status = ::DDS::RETCODE_OK;
                    } else {
                        status = ::DDS::RETCODE_PRECONDITION_NOT_MET;
                    }
                }
            }
        } else {
            status = ::DDS::RETCODE_PRECONDITION_NOT_MET;
        }
    }
    return status;
}


::DDS::ReturnCode_t
DDS::TopicBuiltinTopicDataDataReaderView_impl::get_key_value(
    DDS::TopicBuiltinTopicData & key_holder,
    ::DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS
{
    return DataReaderView_impl::get_key_value(&key_holder, handle);
}

::DDS::InstanceHandle_t
DDS::TopicBuiltinTopicDataDataReaderView_impl::lookup_instance(
    const DDS::TopicBuiltinTopicData & instance) THROW_ORB_EXCEPTIONS
{
    return DataReaderView_impl::lookup_instance(&instance);
}



extern c_bool
__DDS_PublicationBuiltinTopicData__copyIn(
    c_base base,
    struct DDS::PublicationBuiltinTopicData *from,
    struct _DDS_PublicationBuiltinTopicData *to);

extern void
__DDS_PublicationBuiltinTopicData__copyOut(
    void *_from,
    void *_to);

// DDS DDS::PublicationBuiltinTopicData TypeSupportFactory Object Body

::DDS::DataWriter_ptr
DDS::PublicationBuiltinTopicDataTypeSupportFactory::create_datawriter (gapi_dataWriter handle)
{
    return new DDS::PublicationBuiltinTopicDataDataWriter_impl(handle);
}

::DDS::DataReader_ptr
DDS::PublicationBuiltinTopicDataTypeSupportFactory::create_datareader (gapi_dataReader handle)
{
    return new DDS::PublicationBuiltinTopicDataDataReader_impl (handle);
}


::DDS::DataReaderView_ptr
DDS::PublicationBuiltinTopicDataTypeSupportFactory::create_view (gapi_dataReaderView handle)
{
    return new DDS::PublicationBuiltinTopicDataDataReaderView_impl (handle);
}

// DDS DDS::PublicationBuiltinTopicData TypeSupport Object Body

DDS::PublicationBuiltinTopicDataTypeSupport::PublicationBuiltinTopicDataTypeSupport(void) :
    TypeSupport_impl(
        __DDS_PublicationBuiltinTopicData__name(),
        __DDS_PublicationBuiltinTopicData__keys(),
        DDS::PublicationBuiltinTopicDataTypeSupport::metaDescriptor,
        (gapi_copyIn) __DDS_PublicationBuiltinTopicData__copyIn,
        (gapi_copyOut) __DDS_PublicationBuiltinTopicData__copyOut,
        (gapi_readerCopy) ::DDS::ccpp_DataReaderCopy<DDS::PublicationBuiltinTopicDataSeq, DDS::PublicationBuiltinTopicData>,
        new  DDS::PublicationBuiltinTopicDataTypeSupportFactory(),
        DDS::PublicationBuiltinTopicDataTypeSupport::metaDescriptorArrLength)
{
    // Parent constructor takes care of everything.
}

DDS::PublicationBuiltinTopicDataTypeSupport::~PublicationBuiltinTopicDataTypeSupport(void)
{
    // Parent destructor takes care of everything.
}

::DDS::ReturnCode_t
DDS::PublicationBuiltinTopicDataTypeSupport::register_type(
    ::DDS::DomainParticipant_ptr domain,
    const char * type_name) THROW_ORB_EXCEPTIONS
{
    return TypeSupport_impl::register_type(domain, type_name);
}

char *
DDS::PublicationBuiltinTopicDataTypeSupport::get_type_name() THROW_ORB_EXCEPTIONS
{
    return TypeSupport_impl::get_type_name();
}

// DDS DDS::PublicationBuiltinTopicData DataWriter_impl Object Body

DDS::PublicationBuiltinTopicDataDataWriter_impl::PublicationBuiltinTopicDataDataWriter_impl (
    gapi_dataWriter handle
) : ::DDS::DataWriter_impl(handle)
{
    // Parent constructor takes care of everything.
}

DDS::PublicationBuiltinTopicDataDataWriter_impl::~PublicationBuiltinTopicDataDataWriter_impl(void)
{
    // Parent destructor takes care of everything.
}

::DDS::InstanceHandle_t
DDS::PublicationBuiltinTopicDataDataWriter_impl::register_instance(
    const DDS::PublicationBuiltinTopicData & instance_data) THROW_ORB_EXCEPTIONS
{
    return DataWriter_impl::register_instance(&instance_data);
}

::DDS::InstanceHandle_t
DDS::PublicationBuiltinTopicDataDataWriter_impl::register_instance_w_timestamp(
    const PublicationBuiltinTopicData & instance_data,
    const ::DDS::Time_t & source_timestamp) THROW_ORB_EXCEPTIONS
{
    return DataWriter_impl::register_instance_w_timestamp(&instance_data, source_timestamp);
}

::DDS::ReturnCode_t
DDS::PublicationBuiltinTopicDataDataWriter_impl::unregister_instance(
    const DDS::PublicationBuiltinTopicData & instance_data,
    ::DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS
{
    return DataWriter_impl::unregister_instance(&instance_data, handle);
}

::DDS::ReturnCode_t
DDS::PublicationBuiltinTopicDataDataWriter_impl::unregister_instance_w_timestamp(
    const PublicationBuiltinTopicData & instance_data,
    ::DDS::InstanceHandle_t handle,
    const ::DDS::Time_t & source_timestamp) THROW_ORB_EXCEPTIONS
{
    return DataWriter_impl::unregister_instance_w_timestamp(&instance_data, handle, source_timestamp);
}

::DDS::ReturnCode_t
DDS::PublicationBuiltinTopicDataDataWriter_impl::write(
    const DDS::PublicationBuiltinTopicData & instance_data,
    ::DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS
{
    return DataWriter_impl::write(&instance_data, handle);
}

::DDS::ReturnCode_t
DDS::PublicationBuiltinTopicDataDataWriter_impl::write_w_timestamp(
    const PublicationBuiltinTopicData & instance_data,
    ::DDS::InstanceHandle_t handle,
    const ::DDS::Time_t & source_timestamp) THROW_ORB_EXCEPTIONS
{
    return DataWriter_impl::write_w_timestamp(&instance_data, handle, source_timestamp);
}

::DDS::ReturnCode_t
DDS::PublicationBuiltinTopicDataDataWriter_impl::dispose(
    const DDS::PublicationBuiltinTopicData & instance_data,
    ::DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS
{
    return DataWriter_impl::dispose(&instance_data, handle);
}

::DDS::ReturnCode_t
DDS::PublicationBuiltinTopicDataDataWriter_impl::dispose_w_timestamp(
    const PublicationBuiltinTopicData & instance_data,
    ::DDS::InstanceHandle_t handle,
    const ::DDS::Time_t & source_timestamp) THROW_ORB_EXCEPTIONS
{
    return DataWriter_impl::dispose_w_timestamp(&instance_data, handle, source_timestamp);
}

::DDS::ReturnCode_t
DDS::PublicationBuiltinTopicDataDataWriter_impl::writedispose(
    const DDS::PublicationBuiltinTopicData & instance_data,
    ::DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS
{
    return DataWriter_impl::writedispose(&instance_data, handle);
}

::DDS::ReturnCode_t
DDS::PublicationBuiltinTopicDataDataWriter_impl::writedispose_w_timestamp(
    const PublicationBuiltinTopicData & instance_data,
    ::DDS::InstanceHandle_t handle,
    const ::DDS::Time_t & source_timestamp) THROW_ORB_EXCEPTIONS
{
    return DataWriter_impl::writedispose_w_timestamp(&instance_data, handle, source_timestamp);
}

::DDS::ReturnCode_t
DDS::PublicationBuiltinTopicDataDataWriter_impl::get_key_value(
    PublicationBuiltinTopicData & key_holder,
    ::DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS
{
    return DataWriter_impl::get_key_value(&key_holder, handle);
}

::DDS::InstanceHandle_t
DDS::PublicationBuiltinTopicDataDataWriter_impl::lookup_instance(
    const DDS::PublicationBuiltinTopicData & instance_data) THROW_ORB_EXCEPTIONS
{
    return DataWriter_impl::lookup_instance(&instance_data);
}

// DDS DDS::PublicationBuiltinTopicData DataReader_impl Object Body

DDS::PublicationBuiltinTopicDataDataReader_impl::PublicationBuiltinTopicDataDataReader_impl (
    gapi_dataReader handle
) : ::DDS::DataReader_impl(handle, ::DDS::ccpp_DataReaderParallelDemarshallingMain<DDS::PublicationBuiltinTopicDataSeq>)
{
    // Parent constructor takes care of everything.
}

DDS::PublicationBuiltinTopicDataDataReader_impl::~PublicationBuiltinTopicDataDataReader_impl(void)
{
    // Parent destructor takes care of everything.
}


::DDS::ReturnCode_t
DDS::PublicationBuiltinTopicDataDataReader_impl::read(
    DDS::PublicationBuiltinTopicDataSeq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::SampleStateMask sample_states,
    ::DDS::ViewStateMask view_states,
    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DataReader_impl::read(&received_data, info_seq, max_samples, sample_states, view_states, instance_states);
    }
    return status;
}

::DDS::ReturnCode_t
DDS::PublicationBuiltinTopicDataDataReader_impl::take(
    DDS::PublicationBuiltinTopicDataSeq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::SampleStateMask sample_states,
    ::DDS::ViewStateMask view_states,
    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DataReader_impl::take(&received_data, info_seq, max_samples, sample_states, view_states, instance_states);
    }
    return status;
}

::DDS::ReturnCode_t
DDS::PublicationBuiltinTopicDataDataReader_impl::read_w_condition(
    DDS::PublicationBuiltinTopicDataSeq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DataReader_impl::read_w_condition(&received_data, info_seq, max_samples, a_condition);
    }
    return status;
}

::DDS::ReturnCode_t
DDS::PublicationBuiltinTopicDataDataReader_impl::take_w_condition(
    DDS::PublicationBuiltinTopicDataSeq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DataReader_impl::take_w_condition(&received_data, info_seq, max_samples, a_condition);
    }
    return status;
}


::DDS::ReturnCode_t
DDS::PublicationBuiltinTopicDataDataReader_impl::read_next_sample(
    DDS::PublicationBuiltinTopicData & received_data,
    ::DDS::SampleInfo & sample_info) THROW_ORB_EXCEPTIONS
{
    return DataReader_impl::read_next_sample(&received_data, sample_info);
}


::DDS::ReturnCode_t
DDS::PublicationBuiltinTopicDataDataReader_impl::take_next_sample(
    DDS::PublicationBuiltinTopicData & received_data,
    ::DDS::SampleInfo & sample_info) THROW_ORB_EXCEPTIONS
{
    return DataReader_impl::take_next_sample(&received_data, sample_info);
}


::DDS::ReturnCode_t
DDS::PublicationBuiltinTopicDataDataReader_impl::read_instance(
    DDS::PublicationBuiltinTopicDataSeq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::InstanceHandle_t a_handle,
    ::DDS::SampleStateMask sample_states,
    ::DDS::ViewStateMask view_states,
    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DataReader_impl::read_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}

::DDS::ReturnCode_t
DDS::PublicationBuiltinTopicDataDataReader_impl::take_instance(
    DDS::PublicationBuiltinTopicDataSeq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::InstanceHandle_t a_handle,
    ::DDS::SampleStateMask sample_states,
    ::DDS::ViewStateMask view_states,
    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DataReader_impl::take_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}

::DDS::ReturnCode_t
DDS::PublicationBuiltinTopicDataDataReader_impl::read_next_instance(
    DDS::PublicationBuiltinTopicDataSeq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::InstanceHandle_t a_handle,
    ::DDS::SampleStateMask sample_states,
    ::DDS::ViewStateMask view_states,
    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DataReader_impl::read_next_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}

::DDS::ReturnCode_t
DDS::PublicationBuiltinTopicDataDataReader_impl::take_next_instance(
    DDS::PublicationBuiltinTopicDataSeq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::InstanceHandle_t a_handle,
    ::DDS::SampleStateMask sample_states,
    ::DDS::ViewStateMask view_states,
    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DataReader_impl::take_next_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}


::DDS::ReturnCode_t
DDS::PublicationBuiltinTopicDataDataReader_impl::read_next_instance_w_condition(
    DDS::PublicationBuiltinTopicDataSeq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::InstanceHandle_t a_handle,
    ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DataReader_impl::read_next_instance_w_condition(&received_data, info_seq, max_samples, a_handle, a_condition);
    }
    return status;
}


::DDS::ReturnCode_t
DDS::PublicationBuiltinTopicDataDataReader_impl::take_next_instance_w_condition(
    DDS::PublicationBuiltinTopicDataSeq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::InstanceHandle_t a_handle,
    ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DataReader_impl::take_next_instance_w_condition(&received_data, info_seq, max_samples, a_handle, a_condition);
    }
    return status;
}


::DDS::ReturnCode_t
DDS::PublicationBuiltinTopicDataDataReader_impl::return_loan(
    DDS::PublicationBuiltinTopicDataSeq & received_data,
    ::DDS::SampleInfoSeq & info_seq) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status = ::DDS::RETCODE_OK;

    if ( received_data.length() > 0 ) {
        if (received_data.length() == info_seq.length() &&
            received_data.release() == info_seq.release() ) {
            if (!received_data.release()) {
                status = DataReader_impl::return_loan( received_data.get_buffer(),
                                                       info_seq.get_buffer() );

                if ( status == ::DDS::RETCODE_OK ) {
                    if ( !received_data.release() ) {
                        DDS::PublicationBuiltinTopicDataSeq::freebuf( received_data.get_buffer(false) );
                        received_data.replace(0, 0, NULL, false);
                        ::DDS::SampleInfoSeq::freebuf( info_seq.get_buffer(false) );
                        info_seq.replace(0, 0, NULL, false);
                    }
                } else if ( status == ::DDS::RETCODE_NO_DATA ) {
                    if ( received_data.release() ) {
                        status = ::DDS::RETCODE_OK;
                    } else {
                        status = ::DDS::RETCODE_PRECONDITION_NOT_MET;
                    }
                }
            }
        } else {
            status = ::DDS::RETCODE_PRECONDITION_NOT_MET;
        }
    }
    return status;
}


::DDS::ReturnCode_t
DDS::PublicationBuiltinTopicDataDataReader_impl::get_key_value(
    DDS::PublicationBuiltinTopicData & key_holder,
    ::DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS
{
    return DataReader_impl::get_key_value(&key_holder, handle);
}

::DDS::InstanceHandle_t
DDS::PublicationBuiltinTopicDataDataReader_impl::lookup_instance(
    const DDS::PublicationBuiltinTopicData & instance) THROW_ORB_EXCEPTIONS
{
    return DataReader_impl::lookup_instance(&instance);
}

::DDS::ReturnCode_t
DDS::PublicationBuiltinTopicDataDataReader_impl::check_preconditions(
    DDS::PublicationBuiltinTopicDataSeq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples)
{
    ::DDS::ReturnCode_t status = ::DDS::RETCODE_PRECONDITION_NOT_MET;

    if ( received_data.length() == info_seq.length() &&
         received_data.maximum() == info_seq.maximum() &&
         received_data.release() == info_seq.release() ) {
        if ( received_data.maximum() == 0 || received_data.release() ) {
            if (received_data.maximum() == 0 ||
                max_samples <= static_cast<DDS::Long>(received_data.maximum()) ||
                max_samples == ::DDS::LENGTH_UNLIMITED ) {
                status = ::DDS::RETCODE_OK;
            }
        }
    }
    return status;
}


// DDS DDS::PublicationBuiltinTopicData DataReaderView_impl Object Body

DDS::PublicationBuiltinTopicDataDataReaderView_impl::PublicationBuiltinTopicDataDataReaderView_impl (
    gapi_dataReaderView handle
) : ::DDS::DataReaderView_impl(handle)
{
    // Parent constructor takes care of everything.
}

DDS::PublicationBuiltinTopicDataDataReaderView_impl::~PublicationBuiltinTopicDataDataReaderView_impl(void)
{
    // Parent destructor takes care of everything.
}


::DDS::ReturnCode_t
DDS::PublicationBuiltinTopicDataDataReaderView_impl::read(
    DDS::PublicationBuiltinTopicDataSeq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::SampleStateMask sample_states,
    ::DDS::ViewStateMask view_states,
    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = DDS::PublicationBuiltinTopicDataDataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DataReaderView_impl::read(&received_data, info_seq, max_samples, sample_states, view_states, instance_states);
    }
    return status;
}

::DDS::ReturnCode_t
DDS::PublicationBuiltinTopicDataDataReaderView_impl::take(
    DDS::PublicationBuiltinTopicDataSeq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::SampleStateMask sample_states,
    ::DDS::ViewStateMask view_states,
    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = DDS::PublicationBuiltinTopicDataDataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DataReaderView_impl::take(&received_data, info_seq, max_samples, sample_states, view_states, instance_states);
    }
    return status;
}

::DDS::ReturnCode_t
DDS::PublicationBuiltinTopicDataDataReaderView_impl::read_w_condition(
    DDS::PublicationBuiltinTopicDataSeq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = DDS::PublicationBuiltinTopicDataDataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DataReaderView_impl::read_w_condition(&received_data, info_seq, max_samples, a_condition);
    }
    return status;
}

::DDS::ReturnCode_t
DDS::PublicationBuiltinTopicDataDataReaderView_impl::take_w_condition(
    DDS::PublicationBuiltinTopicDataSeq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = DDS::PublicationBuiltinTopicDataDataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DataReaderView_impl::take_w_condition(&received_data, info_seq, max_samples, a_condition);
    }
    return status;
}


::DDS::ReturnCode_t
DDS::PublicationBuiltinTopicDataDataReaderView_impl::read_next_sample(
    DDS::PublicationBuiltinTopicData & received_data,
    ::DDS::SampleInfo & sample_info) THROW_ORB_EXCEPTIONS
{
    return DataReaderView_impl::read_next_sample(&received_data, sample_info);
}


::DDS::ReturnCode_t
DDS::PublicationBuiltinTopicDataDataReaderView_impl::take_next_sample(
    DDS::PublicationBuiltinTopicData & received_data,
    ::DDS::SampleInfo & sample_info) THROW_ORB_EXCEPTIONS
{
    return DataReaderView_impl::take_next_sample(&received_data, sample_info);
}


::DDS::ReturnCode_t
DDS::PublicationBuiltinTopicDataDataReaderView_impl::read_instance(
    DDS::PublicationBuiltinTopicDataSeq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::InstanceHandle_t a_handle,
    ::DDS::SampleStateMask sample_states,
    ::DDS::ViewStateMask view_states,
    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = DDS::PublicationBuiltinTopicDataDataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DataReaderView_impl::read_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}

::DDS::ReturnCode_t
DDS::PublicationBuiltinTopicDataDataReaderView_impl::take_instance(
    DDS::PublicationBuiltinTopicDataSeq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::InstanceHandle_t a_handle,
    ::DDS::SampleStateMask sample_states,
    ::DDS::ViewStateMask view_states,
    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = DDS::PublicationBuiltinTopicDataDataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DataReaderView_impl::take_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}

::DDS::ReturnCode_t
DDS::PublicationBuiltinTopicDataDataReaderView_impl::read_next_instance(
    DDS::PublicationBuiltinTopicDataSeq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::InstanceHandle_t a_handle,
    ::DDS::SampleStateMask sample_states,
    ::DDS::ViewStateMask view_states,
    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = DDS::PublicationBuiltinTopicDataDataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DataReaderView_impl::read_next_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}

::DDS::ReturnCode_t
DDS::PublicationBuiltinTopicDataDataReaderView_impl::take_next_instance(
    DDS::PublicationBuiltinTopicDataSeq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::InstanceHandle_t a_handle,
    ::DDS::SampleStateMask sample_states,
    ::DDS::ViewStateMask view_states,
    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = DDS::PublicationBuiltinTopicDataDataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DataReaderView_impl::take_next_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}


::DDS::ReturnCode_t
DDS::PublicationBuiltinTopicDataDataReaderView_impl::read_next_instance_w_condition(
    DDS::PublicationBuiltinTopicDataSeq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::InstanceHandle_t a_handle,
    ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = DDS::PublicationBuiltinTopicDataDataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DataReaderView_impl::read_next_instance_w_condition(&received_data, info_seq, max_samples, a_handle, a_condition);
    }
    return status;
}


::DDS::ReturnCode_t
DDS::PublicationBuiltinTopicDataDataReaderView_impl::take_next_instance_w_condition(
    DDS::PublicationBuiltinTopicDataSeq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::InstanceHandle_t a_handle,
    ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = DDS::PublicationBuiltinTopicDataDataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DataReaderView_impl::take_next_instance_w_condition(&received_data, info_seq, max_samples, a_handle, a_condition);
    }
    return status;
}


::DDS::ReturnCode_t
DDS::PublicationBuiltinTopicDataDataReaderView_impl::return_loan(
    DDS::PublicationBuiltinTopicDataSeq & received_data,
    ::DDS::SampleInfoSeq & info_seq) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status = ::DDS::RETCODE_OK;

    if ( received_data.length() > 0 ) {
        if (received_data.length() == info_seq.length() &&
            received_data.release() == info_seq.release() ) {
            if (!received_data.release()) {
                status = DataReaderView_impl::return_loan( received_data.get_buffer(),
                                                       info_seq.get_buffer() );

                if ( status == ::DDS::RETCODE_OK ) {
                    if ( !received_data.release() ) {
                        DDS::PublicationBuiltinTopicDataSeq::freebuf( received_data.get_buffer(false) );
                        received_data.replace(0, 0, NULL, false);
                        ::DDS::SampleInfoSeq::freebuf( info_seq.get_buffer(false) );
                        info_seq.replace(0, 0, NULL, false);
                    }
                } else if ( status == ::DDS::RETCODE_NO_DATA ) {
                    if ( received_data.release() ) {
                        status = ::DDS::RETCODE_OK;
                    } else {
                        status = ::DDS::RETCODE_PRECONDITION_NOT_MET;
                    }
                }
            }
        } else {
            status = ::DDS::RETCODE_PRECONDITION_NOT_MET;
        }
    }
    return status;
}


::DDS::ReturnCode_t
DDS::PublicationBuiltinTopicDataDataReaderView_impl::get_key_value(
    DDS::PublicationBuiltinTopicData & key_holder,
    ::DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS
{
    return DataReaderView_impl::get_key_value(&key_holder, handle);
}

::DDS::InstanceHandle_t
DDS::PublicationBuiltinTopicDataDataReaderView_impl::lookup_instance(
    const DDS::PublicationBuiltinTopicData & instance) THROW_ORB_EXCEPTIONS
{
    return DataReaderView_impl::lookup_instance(&instance);
}



extern c_bool
__DDS_SubscriptionBuiltinTopicData__copyIn(
    c_base base,
    struct DDS::SubscriptionBuiltinTopicData *from,
    struct _DDS_SubscriptionBuiltinTopicData *to);

extern void
__DDS_SubscriptionBuiltinTopicData__copyOut(
    void *_from,
    void *_to);

// DDS DDS::SubscriptionBuiltinTopicData TypeSupportFactory Object Body

::DDS::DataWriter_ptr
DDS::SubscriptionBuiltinTopicDataTypeSupportFactory::create_datawriter (gapi_dataWriter handle)
{
    return new DDS::SubscriptionBuiltinTopicDataDataWriter_impl(handle);
}

::DDS::DataReader_ptr
DDS::SubscriptionBuiltinTopicDataTypeSupportFactory::create_datareader (gapi_dataReader handle)
{
    return new DDS::SubscriptionBuiltinTopicDataDataReader_impl (handle);
}


::DDS::DataReaderView_ptr
DDS::SubscriptionBuiltinTopicDataTypeSupportFactory::create_view (gapi_dataReaderView handle)
{
    return new DDS::SubscriptionBuiltinTopicDataDataReaderView_impl (handle);
}

// DDS DDS::SubscriptionBuiltinTopicData TypeSupport Object Body

DDS::SubscriptionBuiltinTopicDataTypeSupport::SubscriptionBuiltinTopicDataTypeSupport(void) :
    TypeSupport_impl(
        __DDS_SubscriptionBuiltinTopicData__name(),
        __DDS_SubscriptionBuiltinTopicData__keys(),
        DDS::SubscriptionBuiltinTopicDataTypeSupport::metaDescriptor,
        (gapi_copyIn) __DDS_SubscriptionBuiltinTopicData__copyIn,
        (gapi_copyOut) __DDS_SubscriptionBuiltinTopicData__copyOut,
        (gapi_readerCopy) ::DDS::ccpp_DataReaderCopy<DDS::SubscriptionBuiltinTopicDataSeq, DDS::SubscriptionBuiltinTopicData>,
        new  DDS::SubscriptionBuiltinTopicDataTypeSupportFactory(),
        DDS::SubscriptionBuiltinTopicDataTypeSupport::metaDescriptorArrLength)
{
    // Parent constructor takes care of everything.
}

DDS::SubscriptionBuiltinTopicDataTypeSupport::~SubscriptionBuiltinTopicDataTypeSupport(void)
{
    // Parent destructor takes care of everything.
}

::DDS::ReturnCode_t
DDS::SubscriptionBuiltinTopicDataTypeSupport::register_type(
    ::DDS::DomainParticipant_ptr domain,
    const char * type_name) THROW_ORB_EXCEPTIONS
{
    return TypeSupport_impl::register_type(domain, type_name);
}

char *
DDS::SubscriptionBuiltinTopicDataTypeSupport::get_type_name() THROW_ORB_EXCEPTIONS
{
    return TypeSupport_impl::get_type_name();
}

// DDS DDS::SubscriptionBuiltinTopicData DataWriter_impl Object Body

DDS::SubscriptionBuiltinTopicDataDataWriter_impl::SubscriptionBuiltinTopicDataDataWriter_impl (
    gapi_dataWriter handle
) : ::DDS::DataWriter_impl(handle)
{
    // Parent constructor takes care of everything.
}

DDS::SubscriptionBuiltinTopicDataDataWriter_impl::~SubscriptionBuiltinTopicDataDataWriter_impl(void)
{
    // Parent destructor takes care of everything.
}

::DDS::InstanceHandle_t
DDS::SubscriptionBuiltinTopicDataDataWriter_impl::register_instance(
    const DDS::SubscriptionBuiltinTopicData & instance_data) THROW_ORB_EXCEPTIONS
{
    return DataWriter_impl::register_instance(&instance_data);
}

::DDS::InstanceHandle_t
DDS::SubscriptionBuiltinTopicDataDataWriter_impl::register_instance_w_timestamp(
    const SubscriptionBuiltinTopicData & instance_data,
    const ::DDS::Time_t & source_timestamp) THROW_ORB_EXCEPTIONS
{
    return DataWriter_impl::register_instance_w_timestamp(&instance_data, source_timestamp);
}

::DDS::ReturnCode_t
DDS::SubscriptionBuiltinTopicDataDataWriter_impl::unregister_instance(
    const DDS::SubscriptionBuiltinTopicData & instance_data,
    ::DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS
{
    return DataWriter_impl::unregister_instance(&instance_data, handle);
}

::DDS::ReturnCode_t
DDS::SubscriptionBuiltinTopicDataDataWriter_impl::unregister_instance_w_timestamp(
    const SubscriptionBuiltinTopicData & instance_data,
    ::DDS::InstanceHandle_t handle,
    const ::DDS::Time_t & source_timestamp) THROW_ORB_EXCEPTIONS
{
    return DataWriter_impl::unregister_instance_w_timestamp(&instance_data, handle, source_timestamp);
}

::DDS::ReturnCode_t
DDS::SubscriptionBuiltinTopicDataDataWriter_impl::write(
    const DDS::SubscriptionBuiltinTopicData & instance_data,
    ::DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS
{
    return DataWriter_impl::write(&instance_data, handle);
}

::DDS::ReturnCode_t
DDS::SubscriptionBuiltinTopicDataDataWriter_impl::write_w_timestamp(
    const SubscriptionBuiltinTopicData & instance_data,
    ::DDS::InstanceHandle_t handle,
    const ::DDS::Time_t & source_timestamp) THROW_ORB_EXCEPTIONS
{
    return DataWriter_impl::write_w_timestamp(&instance_data, handle, source_timestamp);
}

::DDS::ReturnCode_t
DDS::SubscriptionBuiltinTopicDataDataWriter_impl::dispose(
    const DDS::SubscriptionBuiltinTopicData & instance_data,
    ::DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS
{
    return DataWriter_impl::dispose(&instance_data, handle);
}

::DDS::ReturnCode_t
DDS::SubscriptionBuiltinTopicDataDataWriter_impl::dispose_w_timestamp(
    const SubscriptionBuiltinTopicData & instance_data,
    ::DDS::InstanceHandle_t handle,
    const ::DDS::Time_t & source_timestamp) THROW_ORB_EXCEPTIONS
{
    return DataWriter_impl::dispose_w_timestamp(&instance_data, handle, source_timestamp);
}

::DDS::ReturnCode_t
DDS::SubscriptionBuiltinTopicDataDataWriter_impl::writedispose(
    const DDS::SubscriptionBuiltinTopicData & instance_data,
    ::DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS
{
    return DataWriter_impl::writedispose(&instance_data, handle);
}

::DDS::ReturnCode_t
DDS::SubscriptionBuiltinTopicDataDataWriter_impl::writedispose_w_timestamp(
    const SubscriptionBuiltinTopicData & instance_data,
    ::DDS::InstanceHandle_t handle,
    const ::DDS::Time_t & source_timestamp) THROW_ORB_EXCEPTIONS
{
    return DataWriter_impl::writedispose_w_timestamp(&instance_data, handle, source_timestamp);
}

::DDS::ReturnCode_t
DDS::SubscriptionBuiltinTopicDataDataWriter_impl::get_key_value(
    SubscriptionBuiltinTopicData & key_holder,
    ::DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS
{
    return DataWriter_impl::get_key_value(&key_holder, handle);
}

::DDS::InstanceHandle_t
DDS::SubscriptionBuiltinTopicDataDataWriter_impl::lookup_instance(
    const DDS::SubscriptionBuiltinTopicData & instance_data) THROW_ORB_EXCEPTIONS
{
    return DataWriter_impl::lookup_instance(&instance_data);
}

// DDS DDS::SubscriptionBuiltinTopicData DataReader_impl Object Body

DDS::SubscriptionBuiltinTopicDataDataReader_impl::SubscriptionBuiltinTopicDataDataReader_impl (
    gapi_dataReader handle
) : ::DDS::DataReader_impl(handle, ::DDS::ccpp_DataReaderParallelDemarshallingMain<DDS::SubscriptionBuiltinTopicDataSeq>)
{
    // Parent constructor takes care of everything.
}

DDS::SubscriptionBuiltinTopicDataDataReader_impl::~SubscriptionBuiltinTopicDataDataReader_impl(void)
{
    // Parent destructor takes care of everything.
}


::DDS::ReturnCode_t
DDS::SubscriptionBuiltinTopicDataDataReader_impl::read(
    DDS::SubscriptionBuiltinTopicDataSeq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::SampleStateMask sample_states,
    ::DDS::ViewStateMask view_states,
    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DataReader_impl::read(&received_data, info_seq, max_samples, sample_states, view_states, instance_states);
    }
    return status;
}

::DDS::ReturnCode_t
DDS::SubscriptionBuiltinTopicDataDataReader_impl::take(
    DDS::SubscriptionBuiltinTopicDataSeq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::SampleStateMask sample_states,
    ::DDS::ViewStateMask view_states,
    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DataReader_impl::take(&received_data, info_seq, max_samples, sample_states, view_states, instance_states);
    }
    return status;
}

::DDS::ReturnCode_t
DDS::SubscriptionBuiltinTopicDataDataReader_impl::read_w_condition(
    DDS::SubscriptionBuiltinTopicDataSeq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DataReader_impl::read_w_condition(&received_data, info_seq, max_samples, a_condition);
    }
    return status;
}

::DDS::ReturnCode_t
DDS::SubscriptionBuiltinTopicDataDataReader_impl::take_w_condition(
    DDS::SubscriptionBuiltinTopicDataSeq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DataReader_impl::take_w_condition(&received_data, info_seq, max_samples, a_condition);
    }
    return status;
}


::DDS::ReturnCode_t
DDS::SubscriptionBuiltinTopicDataDataReader_impl::read_next_sample(
    DDS::SubscriptionBuiltinTopicData & received_data,
    ::DDS::SampleInfo & sample_info) THROW_ORB_EXCEPTIONS
{
    return DataReader_impl::read_next_sample(&received_data, sample_info);
}


::DDS::ReturnCode_t
DDS::SubscriptionBuiltinTopicDataDataReader_impl::take_next_sample(
    DDS::SubscriptionBuiltinTopicData & received_data,
    ::DDS::SampleInfo & sample_info) THROW_ORB_EXCEPTIONS
{
    return DataReader_impl::take_next_sample(&received_data, sample_info);
}


::DDS::ReturnCode_t
DDS::SubscriptionBuiltinTopicDataDataReader_impl::read_instance(
    DDS::SubscriptionBuiltinTopicDataSeq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::InstanceHandle_t a_handle,
    ::DDS::SampleStateMask sample_states,
    ::DDS::ViewStateMask view_states,
    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DataReader_impl::read_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}

::DDS::ReturnCode_t
DDS::SubscriptionBuiltinTopicDataDataReader_impl::take_instance(
    DDS::SubscriptionBuiltinTopicDataSeq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::InstanceHandle_t a_handle,
    ::DDS::SampleStateMask sample_states,
    ::DDS::ViewStateMask view_states,
    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DataReader_impl::take_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}

::DDS::ReturnCode_t
DDS::SubscriptionBuiltinTopicDataDataReader_impl::read_next_instance(
    DDS::SubscriptionBuiltinTopicDataSeq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::InstanceHandle_t a_handle,
    ::DDS::SampleStateMask sample_states,
    ::DDS::ViewStateMask view_states,
    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DataReader_impl::read_next_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}

::DDS::ReturnCode_t
DDS::SubscriptionBuiltinTopicDataDataReader_impl::take_next_instance(
    DDS::SubscriptionBuiltinTopicDataSeq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::InstanceHandle_t a_handle,
    ::DDS::SampleStateMask sample_states,
    ::DDS::ViewStateMask view_states,
    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DataReader_impl::take_next_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}


::DDS::ReturnCode_t
DDS::SubscriptionBuiltinTopicDataDataReader_impl::read_next_instance_w_condition(
    DDS::SubscriptionBuiltinTopicDataSeq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::InstanceHandle_t a_handle,
    ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DataReader_impl::read_next_instance_w_condition(&received_data, info_seq, max_samples, a_handle, a_condition);
    }
    return status;
}


::DDS::ReturnCode_t
DDS::SubscriptionBuiltinTopicDataDataReader_impl::take_next_instance_w_condition(
    DDS::SubscriptionBuiltinTopicDataSeq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::InstanceHandle_t a_handle,
    ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DataReader_impl::take_next_instance_w_condition(&received_data, info_seq, max_samples, a_handle, a_condition);
    }
    return status;
}


::DDS::ReturnCode_t
DDS::SubscriptionBuiltinTopicDataDataReader_impl::return_loan(
    DDS::SubscriptionBuiltinTopicDataSeq & received_data,
    ::DDS::SampleInfoSeq & info_seq) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status = ::DDS::RETCODE_OK;

    if ( received_data.length() > 0 ) {
        if (received_data.length() == info_seq.length() &&
            received_data.release() == info_seq.release() ) {
            if (!received_data.release()) {
                status = DataReader_impl::return_loan( received_data.get_buffer(),
                                                       info_seq.get_buffer() );

                if ( status == ::DDS::RETCODE_OK ) {
                    if ( !received_data.release() ) {
                        DDS::SubscriptionBuiltinTopicDataSeq::freebuf( received_data.get_buffer(false) );
                        received_data.replace(0, 0, NULL, false);
                        ::DDS::SampleInfoSeq::freebuf( info_seq.get_buffer(false) );
                        info_seq.replace(0, 0, NULL, false);
                    }
                } else if ( status == ::DDS::RETCODE_NO_DATA ) {
                    if ( received_data.release() ) {
                        status = ::DDS::RETCODE_OK;
                    } else {
                        status = ::DDS::RETCODE_PRECONDITION_NOT_MET;
                    }
                }
            }
        } else {
            status = ::DDS::RETCODE_PRECONDITION_NOT_MET;
        }
    }
    return status;
}


::DDS::ReturnCode_t
DDS::SubscriptionBuiltinTopicDataDataReader_impl::get_key_value(
    DDS::SubscriptionBuiltinTopicData & key_holder,
    ::DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS
{
    return DataReader_impl::get_key_value(&key_holder, handle);
}

::DDS::InstanceHandle_t
DDS::SubscriptionBuiltinTopicDataDataReader_impl::lookup_instance(
    const DDS::SubscriptionBuiltinTopicData & instance) THROW_ORB_EXCEPTIONS
{
    return DataReader_impl::lookup_instance(&instance);
}

::DDS::ReturnCode_t
DDS::SubscriptionBuiltinTopicDataDataReader_impl::check_preconditions(
    DDS::SubscriptionBuiltinTopicDataSeq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples)
{
    ::DDS::ReturnCode_t status = ::DDS::RETCODE_PRECONDITION_NOT_MET;

    if ( received_data.length() == info_seq.length() &&
         received_data.maximum() == info_seq.maximum() &&
         received_data.release() == info_seq.release() ) {
        if ( received_data.maximum() == 0 || received_data.release() ) {
            if (received_data.maximum() == 0 ||
                max_samples <= static_cast<DDS::Long>(received_data.maximum()) ||
                max_samples == ::DDS::LENGTH_UNLIMITED ) {
                status = ::DDS::RETCODE_OK;
            }
        }
    }
    return status;
}


// DDS DDS::SubscriptionBuiltinTopicData DataReaderView_impl Object Body

DDS::SubscriptionBuiltinTopicDataDataReaderView_impl::SubscriptionBuiltinTopicDataDataReaderView_impl (
    gapi_dataReaderView handle
) : ::DDS::DataReaderView_impl(handle)
{
    // Parent constructor takes care of everything.
}

DDS::SubscriptionBuiltinTopicDataDataReaderView_impl::~SubscriptionBuiltinTopicDataDataReaderView_impl(void)
{
    // Parent destructor takes care of everything.
}


::DDS::ReturnCode_t
DDS::SubscriptionBuiltinTopicDataDataReaderView_impl::read(
    DDS::SubscriptionBuiltinTopicDataSeq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::SampleStateMask sample_states,
    ::DDS::ViewStateMask view_states,
    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = DDS::SubscriptionBuiltinTopicDataDataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DataReaderView_impl::read(&received_data, info_seq, max_samples, sample_states, view_states, instance_states);
    }
    return status;
}

::DDS::ReturnCode_t
DDS::SubscriptionBuiltinTopicDataDataReaderView_impl::take(
    DDS::SubscriptionBuiltinTopicDataSeq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::SampleStateMask sample_states,
    ::DDS::ViewStateMask view_states,
    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = DDS::SubscriptionBuiltinTopicDataDataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DataReaderView_impl::take(&received_data, info_seq, max_samples, sample_states, view_states, instance_states);
    }
    return status;
}

::DDS::ReturnCode_t
DDS::SubscriptionBuiltinTopicDataDataReaderView_impl::read_w_condition(
    DDS::SubscriptionBuiltinTopicDataSeq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = DDS::SubscriptionBuiltinTopicDataDataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DataReaderView_impl::read_w_condition(&received_data, info_seq, max_samples, a_condition);
    }
    return status;
}

::DDS::ReturnCode_t
DDS::SubscriptionBuiltinTopicDataDataReaderView_impl::take_w_condition(
    DDS::SubscriptionBuiltinTopicDataSeq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = DDS::SubscriptionBuiltinTopicDataDataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DataReaderView_impl::take_w_condition(&received_data, info_seq, max_samples, a_condition);
    }
    return status;
}


::DDS::ReturnCode_t
DDS::SubscriptionBuiltinTopicDataDataReaderView_impl::read_next_sample(
    DDS::SubscriptionBuiltinTopicData & received_data,
    ::DDS::SampleInfo & sample_info) THROW_ORB_EXCEPTIONS
{
    return DataReaderView_impl::read_next_sample(&received_data, sample_info);
}


::DDS::ReturnCode_t
DDS::SubscriptionBuiltinTopicDataDataReaderView_impl::take_next_sample(
    DDS::SubscriptionBuiltinTopicData & received_data,
    ::DDS::SampleInfo & sample_info) THROW_ORB_EXCEPTIONS
{
    return DataReaderView_impl::take_next_sample(&received_data, sample_info);
}


::DDS::ReturnCode_t
DDS::SubscriptionBuiltinTopicDataDataReaderView_impl::read_instance(
    DDS::SubscriptionBuiltinTopicDataSeq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::InstanceHandle_t a_handle,
    ::DDS::SampleStateMask sample_states,
    ::DDS::ViewStateMask view_states,
    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = DDS::SubscriptionBuiltinTopicDataDataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DataReaderView_impl::read_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}

::DDS::ReturnCode_t
DDS::SubscriptionBuiltinTopicDataDataReaderView_impl::take_instance(
    DDS::SubscriptionBuiltinTopicDataSeq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::InstanceHandle_t a_handle,
    ::DDS::SampleStateMask sample_states,
    ::DDS::ViewStateMask view_states,
    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = DDS::SubscriptionBuiltinTopicDataDataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DataReaderView_impl::take_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}

::DDS::ReturnCode_t
DDS::SubscriptionBuiltinTopicDataDataReaderView_impl::read_next_instance(
    DDS::SubscriptionBuiltinTopicDataSeq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::InstanceHandle_t a_handle,
    ::DDS::SampleStateMask sample_states,
    ::DDS::ViewStateMask view_states,
    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = DDS::SubscriptionBuiltinTopicDataDataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DataReaderView_impl::read_next_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}

::DDS::ReturnCode_t
DDS::SubscriptionBuiltinTopicDataDataReaderView_impl::take_next_instance(
    DDS::SubscriptionBuiltinTopicDataSeq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::InstanceHandle_t a_handle,
    ::DDS::SampleStateMask sample_states,
    ::DDS::ViewStateMask view_states,
    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = DDS::SubscriptionBuiltinTopicDataDataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DataReaderView_impl::take_next_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}


::DDS::ReturnCode_t
DDS::SubscriptionBuiltinTopicDataDataReaderView_impl::read_next_instance_w_condition(
    DDS::SubscriptionBuiltinTopicDataSeq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::InstanceHandle_t a_handle,
    ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = DDS::SubscriptionBuiltinTopicDataDataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DataReaderView_impl::read_next_instance_w_condition(&received_data, info_seq, max_samples, a_handle, a_condition);
    }
    return status;
}


::DDS::ReturnCode_t
DDS::SubscriptionBuiltinTopicDataDataReaderView_impl::take_next_instance_w_condition(
    DDS::SubscriptionBuiltinTopicDataSeq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::InstanceHandle_t a_handle,
    ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = DDS::SubscriptionBuiltinTopicDataDataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DataReaderView_impl::take_next_instance_w_condition(&received_data, info_seq, max_samples, a_handle, a_condition);
    }
    return status;
}


::DDS::ReturnCode_t
DDS::SubscriptionBuiltinTopicDataDataReaderView_impl::return_loan(
    DDS::SubscriptionBuiltinTopicDataSeq & received_data,
    ::DDS::SampleInfoSeq & info_seq) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status = ::DDS::RETCODE_OK;

    if ( received_data.length() > 0 ) {
        if (received_data.length() == info_seq.length() &&
            received_data.release() == info_seq.release() ) {
            if (!received_data.release()) {
                status = DataReaderView_impl::return_loan( received_data.get_buffer(),
                                                       info_seq.get_buffer() );

                if ( status == ::DDS::RETCODE_OK ) {
                    if ( !received_data.release() ) {
                        DDS::SubscriptionBuiltinTopicDataSeq::freebuf( received_data.get_buffer(false) );
                        received_data.replace(0, 0, NULL, false);
                        ::DDS::SampleInfoSeq::freebuf( info_seq.get_buffer(false) );
                        info_seq.replace(0, 0, NULL, false);
                    }
                } else if ( status == ::DDS::RETCODE_NO_DATA ) {
                    if ( received_data.release() ) {
                        status = ::DDS::RETCODE_OK;
                    } else {
                        status = ::DDS::RETCODE_PRECONDITION_NOT_MET;
                    }
                }
            }
        } else {
            status = ::DDS::RETCODE_PRECONDITION_NOT_MET;
        }
    }
    return status;
}


::DDS::ReturnCode_t
DDS::SubscriptionBuiltinTopicDataDataReaderView_impl::get_key_value(
    DDS::SubscriptionBuiltinTopicData & key_holder,
    ::DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS
{
    return DataReaderView_impl::get_key_value(&key_holder, handle);
}

::DDS::InstanceHandle_t
DDS::SubscriptionBuiltinTopicDataDataReaderView_impl::lookup_instance(
    const DDS::SubscriptionBuiltinTopicData & instance) THROW_ORB_EXCEPTIONS
{
    return DataReaderView_impl::lookup_instance(&instance);
}



const char * ::DDS::ParticipantBuiltinTopicDataTypeSupport::metaDescriptor[] = {"<MetaData version=\"1.0.0\"><Module name=\"DDS\"><TypeDef name=\"BuiltinTopicKey_t\"><Array size=\"3\">",
"<Long/></Array></TypeDef><TypeDef name=\"octSeq\"><Sequence><Octet/></Sequence></TypeDef><Struct name=\"UserDataQosPolicy\">",
"<Member name=\"value\"><Type name=\"octSeq\"/></Member></Struct><Struct name=\"ParticipantBuiltinTopicData\">",
"<Member name=\"key\"><Type name=\"BuiltinTopicKey_t\"/></Member><Member name=\"user_data\"><Type name=\"UserDataQosPolicy\"/>",
"</Member></Struct></Module></MetaData>"};
const ::DDS::ULong (::DDS::ParticipantBuiltinTopicDataTypeSupport::metaDescriptorArrLength) = 5;
const char * ::DDS::TopicBuiltinTopicDataTypeSupport::metaDescriptor[] = {"<MetaData version=\"1.0.0\"><Module name=\"DDS\"><TypeDef name=\"BuiltinTopicKey_t\"><Array size=\"3\">",
"<Long/></Array></TypeDef><Enum name=\"DurabilityQosPolicyKind\"><Element name=\"VOLATILE_DURABILITY_QOS\" value=\"0\"/>",
"<Element name=\"TRANSIENT_LOCAL_DURABILITY_QOS\" value=\"1\"/><Element name=\"TRANSIENT_DURABILITY_QOS\" value=\"2\"/>",
"<Element name=\"PERSISTENT_DURABILITY_QOS\" value=\"3\"/></Enum><Struct name=\"Duration_t\"><Member name=\"sec\">",
"<Long/></Member><Member name=\"nanosec\"><ULong/></Member></Struct><Enum name=\"HistoryQosPolicyKind\">",
"<Element name=\"KEEP_LAST_HISTORY_QOS\" value=\"0\"/><Element name=\"KEEP_ALL_HISTORY_QOS\" value=\"1\"/>",
"</Enum><Enum name=\"LivelinessQosPolicyKind\"><Element name=\"AUTOMATIC_LIVELINESS_QOS\" value=\"0\"/>",
"<Element name=\"MANUAL_BY_PARTICIPANT_LIVELINESS_QOS\" value=\"1\"/><Element name=\"MANUAL_BY_TOPIC_LIVELINESS_QOS\" value=\"2\"/>",
"</Enum><Enum name=\"ReliabilityQosPolicyKind\"><Element name=\"BEST_EFFORT_RELIABILITY_QOS\" value=\"0\"/>",
"<Element name=\"RELIABLE_RELIABILITY_QOS\" value=\"1\"/></Enum><Struct name=\"TransportPriorityQosPolicy\">",
"<Member name=\"value\"><Long/></Member></Struct><Enum name=\"DestinationOrderQosPolicyKind\"><Element name=\"BY_RECEPTION_TIMESTAMP_DESTINATIONORDER_QOS\" value=\"0\"/>",
"<Element name=\"BY_SOURCE_TIMESTAMP_DESTINATIONORDER_QOS\" value=\"1\"/></Enum><Struct name=\"ResourceLimitsQosPolicy\">",
"<Member name=\"max_samples\"><Long/></Member><Member name=\"max_instances\"><Long/></Member><Member name=\"max_samples_per_instance\">",
"<Long/></Member></Struct><Enum name=\"OwnershipQosPolicyKind\"><Element name=\"SHARED_OWNERSHIP_QOS\" value=\"0\"/>",
"<Element name=\"EXCLUSIVE_OWNERSHIP_QOS\" value=\"1\"/></Enum><TypeDef name=\"octSeq\"><Sequence><Octet/>",
"</Sequence></TypeDef><Struct name=\"DurabilityQosPolicy\"><Member name=\"kind\"><Type name=\"DurabilityQosPolicyKind\"/>",
"</Member></Struct><Struct name=\"LifespanQosPolicy\"><Member name=\"duration\"><Type name=\"Duration_t\"/>",
"</Member></Struct><Struct name=\"LatencyBudgetQosPolicy\"><Member name=\"duration\"><Type name=\"Duration_t\"/>",
"</Member></Struct><Struct name=\"DeadlineQosPolicy\"><Member name=\"period\"><Type name=\"Duration_t\"/>",
"</Member></Struct><Struct name=\"HistoryQosPolicy\"><Member name=\"kind\"><Type name=\"HistoryQosPolicyKind\"/>",
"</Member><Member name=\"depth\"><Long/></Member></Struct><Struct name=\"DurabilityServiceQosPolicy\">",
"<Member name=\"service_cleanup_delay\"><Type name=\"Duration_t\"/></Member><Member name=\"history_kind\">",
"<Type name=\"HistoryQosPolicyKind\"/></Member><Member name=\"history_depth\"><Long/></Member><Member name=\"max_samples\">",
"<Long/></Member><Member name=\"max_instances\"><Long/></Member><Member name=\"max_samples_per_instance\">",
"<Long/></Member></Struct><Struct name=\"LivelinessQosPolicy\"><Member name=\"kind\"><Type name=\"LivelinessQosPolicyKind\"/>",
"</Member><Member name=\"lease_duration\"><Type name=\"Duration_t\"/></Member></Struct><Struct name=\"ReliabilityQosPolicy\">",
"<Member name=\"kind\"><Type name=\"ReliabilityQosPolicyKind\"/></Member><Member name=\"max_blocking_time\">",
"<Type name=\"Duration_t\"/></Member><Member name=\"synchronous\"><Boolean/></Member></Struct><Struct name=\"DestinationOrderQosPolicy\">",
"<Member name=\"kind\"><Type name=\"DestinationOrderQosPolicyKind\"/></Member></Struct><Struct name=\"OwnershipQosPolicy\">",
"<Member name=\"kind\"><Type name=\"OwnershipQosPolicyKind\"/></Member></Struct><Struct name=\"TopicDataQosPolicy\">",
"<Member name=\"value\"><Type name=\"octSeq\"/></Member></Struct><Struct name=\"TopicBuiltinTopicData\">",
"<Member name=\"key\"><Type name=\"BuiltinTopicKey_t\"/></Member><Member name=\"name\"><String/></Member>",
"<Member name=\"type_name\"><String/></Member><Member name=\"durability\"><Type name=\"DurabilityQosPolicy\"/>",
"</Member><Member name=\"durability_service\"><Type name=\"DurabilityServiceQosPolicy\"/></Member><Member name=\"deadline\">",
"<Type name=\"DeadlineQosPolicy\"/></Member><Member name=\"latency_budget\"><Type name=\"LatencyBudgetQosPolicy\"/>",
"</Member><Member name=\"liveliness\"><Type name=\"LivelinessQosPolicy\"/></Member><Member name=\"reliability\">",
"<Type name=\"ReliabilityQosPolicy\"/></Member><Member name=\"transport_priority\"><Type name=\"TransportPriorityQosPolicy\"/>",
"</Member><Member name=\"lifespan\"><Type name=\"LifespanQosPolicy\"/></Member><Member name=\"destination_order\">",
"<Type name=\"DestinationOrderQosPolicy\"/></Member><Member name=\"history\"><Type name=\"HistoryQosPolicy\"/>",
"</Member><Member name=\"resource_limits\"><Type name=\"ResourceLimitsQosPolicy\"/></Member><Member name=\"ownership\">",
"<Type name=\"OwnershipQosPolicy\"/></Member><Member name=\"topic_data\"><Type name=\"TopicDataQosPolicy\"/>",
"</Member></Struct></Module></MetaData>"};
const ::DDS::ULong (::DDS::TopicBuiltinTopicDataTypeSupport::metaDescriptorArrLength) = 42;
const char * ::DDS::PublicationBuiltinTopicDataTypeSupport::metaDescriptor[] = {"<MetaData version=\"1.0.0\"><Module name=\"DDS\"><TypeDef name=\"BuiltinTopicKey_t\"><Array size=\"3\">",
"<Long/></Array></TypeDef><Enum name=\"DurabilityQosPolicyKind\"><Element name=\"VOLATILE_DURABILITY_QOS\" value=\"0\"/>",
"<Element name=\"TRANSIENT_LOCAL_DURABILITY_QOS\" value=\"1\"/><Element name=\"TRANSIENT_DURABILITY_QOS\" value=\"2\"/>",
"<Element name=\"PERSISTENT_DURABILITY_QOS\" value=\"3\"/></Enum><Struct name=\"Duration_t\"><Member name=\"sec\">",
"<Long/></Member><Member name=\"nanosec\"><ULong/></Member></Struct><Enum name=\"LivelinessQosPolicyKind\">",
"<Element name=\"AUTOMATIC_LIVELINESS_QOS\" value=\"0\"/><Element name=\"MANUAL_BY_PARTICIPANT_LIVELINESS_QOS\" value=\"1\"/>",
"<Element name=\"MANUAL_BY_TOPIC_LIVELINESS_QOS\" value=\"2\"/></Enum><Enum name=\"ReliabilityQosPolicyKind\">",
"<Element name=\"BEST_EFFORT_RELIABILITY_QOS\" value=\"0\"/><Element name=\"RELIABLE_RELIABILITY_QOS\" value=\"1\"/>",
"</Enum><Enum name=\"DestinationOrderQosPolicyKind\"><Element name=\"BY_RECEPTION_TIMESTAMP_DESTINATIONORDER_QOS\" value=\"0\"/>",
"<Element name=\"BY_SOURCE_TIMESTAMP_DESTINATIONORDER_QOS\" value=\"1\"/></Enum><TypeDef name=\"octSeq\">",
"<Sequence><Octet/></Sequence></TypeDef><Enum name=\"OwnershipQosPolicyKind\"><Element name=\"SHARED_OWNERSHIP_QOS\" value=\"0\"/>",
"<Element name=\"EXCLUSIVE_OWNERSHIP_QOS\" value=\"1\"/></Enum><Struct name=\"OwnershipStrengthQosPolicy\">",
"<Member name=\"value\"><Long/></Member></Struct><Enum name=\"PresentationQosPolicyAccessScopeKind\"><Element name=\"INSTANCE_PRESENTATION_QOS\" value=\"0\"/>",
"<Element name=\"TOPIC_PRESENTATION_QOS\" value=\"1\"/><Element name=\"GROUP_PRESENTATION_QOS\" value=\"2\"/>",
"</Enum><TypeDef name=\"StringSeq\"><Sequence><String/></Sequence></TypeDef><Struct name=\"DurabilityQosPolicy\">",
"<Member name=\"kind\"><Type name=\"DurabilityQosPolicyKind\"/></Member></Struct><Struct name=\"LifespanQosPolicy\">",
"<Member name=\"duration\"><Type name=\"Duration_t\"/></Member></Struct><Struct name=\"LatencyBudgetQosPolicy\">",
"<Member name=\"duration\"><Type name=\"Duration_t\"/></Member></Struct><Struct name=\"DeadlineQosPolicy\">",
"<Member name=\"period\"><Type name=\"Duration_t\"/></Member></Struct><Struct name=\"LivelinessQosPolicy\">",
"<Member name=\"kind\"><Type name=\"LivelinessQosPolicyKind\"/></Member><Member name=\"lease_duration\">",
"<Type name=\"Duration_t\"/></Member></Struct><Struct name=\"ReliabilityQosPolicy\"><Member name=\"kind\">",
"<Type name=\"ReliabilityQosPolicyKind\"/></Member><Member name=\"max_blocking_time\"><Type name=\"Duration_t\"/>",
"</Member><Member name=\"synchronous\"><Boolean/></Member></Struct><Struct name=\"DestinationOrderQosPolicy\">",
"<Member name=\"kind\"><Type name=\"DestinationOrderQosPolicyKind\"/></Member></Struct><Struct name=\"GroupDataQosPolicy\">",
"<Member name=\"value\"><Type name=\"octSeq\"/></Member></Struct><Struct name=\"TopicDataQosPolicy\"><Member name=\"value\">",
"<Type name=\"octSeq\"/></Member></Struct><Struct name=\"UserDataQosPolicy\"><Member name=\"value\"><Type name=\"octSeq\"/>",
"</Member></Struct><Struct name=\"OwnershipQosPolicy\"><Member name=\"kind\"><Type name=\"OwnershipQosPolicyKind\"/>",
"</Member></Struct><Struct name=\"PresentationQosPolicy\"><Member name=\"access_scope\"><Type name=\"PresentationQosPolicyAccessScopeKind\"/>",
"</Member><Member name=\"coherent_access\"><Boolean/></Member><Member name=\"ordered_access\"><Boolean/>",
"</Member></Struct><Struct name=\"PartitionQosPolicy\"><Member name=\"name\"><Type name=\"StringSeq\"/>",
"</Member></Struct><Struct name=\"PublicationBuiltinTopicData\"><Member name=\"key\"><Type name=\"BuiltinTopicKey_t\"/>",
"</Member><Member name=\"participant_key\"><Type name=\"BuiltinTopicKey_t\"/></Member><Member name=\"topic_name\">",
"<String/></Member><Member name=\"type_name\"><String/></Member><Member name=\"durability\"><Type name=\"DurabilityQosPolicy\"/>",
"</Member><Member name=\"deadline\"><Type name=\"DeadlineQosPolicy\"/></Member><Member name=\"latency_budget\">",
"<Type name=\"LatencyBudgetQosPolicy\"/></Member><Member name=\"liveliness\"><Type name=\"LivelinessQosPolicy\"/>",
"</Member><Member name=\"reliability\"><Type name=\"ReliabilityQosPolicy\"/></Member><Member name=\"lifespan\">",
"<Type name=\"LifespanQosPolicy\"/></Member><Member name=\"destination_order\"><Type name=\"DestinationOrderQosPolicy\"/>",
"</Member><Member name=\"user_data\"><Type name=\"UserDataQosPolicy\"/></Member><Member name=\"ownership\">",
"<Type name=\"OwnershipQosPolicy\"/></Member><Member name=\"ownership_strength\"><Type name=\"OwnershipStrengthQosPolicy\"/>",
"</Member><Member name=\"presentation\"><Type name=\"PresentationQosPolicy\"/></Member><Member name=\"partition\">",
"<Type name=\"PartitionQosPolicy\"/></Member><Member name=\"topic_data\"><Type name=\"TopicDataQosPolicy\"/>",
"</Member><Member name=\"group_data\"><Type name=\"GroupDataQosPolicy\"/></Member></Struct></Module></MetaData>"};
const ::DDS::ULong (::DDS::PublicationBuiltinTopicDataTypeSupport::metaDescriptorArrLength) = 42;
const char * ::DDS::SubscriptionBuiltinTopicDataTypeSupport::metaDescriptor[] = {"<MetaData version=\"1.0.0\"><Module name=\"DDS\"><TypeDef name=\"BuiltinTopicKey_t\"><Array size=\"3\">",
"<Long/></Array></TypeDef><Enum name=\"DurabilityQosPolicyKind\"><Element name=\"VOLATILE_DURABILITY_QOS\" value=\"0\"/>",
"<Element name=\"TRANSIENT_LOCAL_DURABILITY_QOS\" value=\"1\"/><Element name=\"TRANSIENT_DURABILITY_QOS\" value=\"2\"/>",
"<Element name=\"PERSISTENT_DURABILITY_QOS\" value=\"3\"/></Enum><Struct name=\"Duration_t\"><Member name=\"sec\">",
"<Long/></Member><Member name=\"nanosec\"><ULong/></Member></Struct><Enum name=\"LivelinessQosPolicyKind\">",
"<Element name=\"AUTOMATIC_LIVELINESS_QOS\" value=\"0\"/><Element name=\"MANUAL_BY_PARTICIPANT_LIVELINESS_QOS\" value=\"1\"/>",
"<Element name=\"MANUAL_BY_TOPIC_LIVELINESS_QOS\" value=\"2\"/></Enum><Enum name=\"ReliabilityQosPolicyKind\">",
"<Element name=\"BEST_EFFORT_RELIABILITY_QOS\" value=\"0\"/><Element name=\"RELIABLE_RELIABILITY_QOS\" value=\"1\"/>",
"</Enum><Enum name=\"OwnershipQosPolicyKind\"><Element name=\"SHARED_OWNERSHIP_QOS\" value=\"0\"/><Element name=\"EXCLUSIVE_OWNERSHIP_QOS\" value=\"1\"/>",
"</Enum><Enum name=\"DestinationOrderQosPolicyKind\"><Element name=\"BY_RECEPTION_TIMESTAMP_DESTINATIONORDER_QOS\" value=\"0\"/>",
"<Element name=\"BY_SOURCE_TIMESTAMP_DESTINATIONORDER_QOS\" value=\"1\"/></Enum><TypeDef name=\"octSeq\">",
"<Sequence><Octet/></Sequence></TypeDef><Enum name=\"PresentationQosPolicyAccessScopeKind\"><Element name=\"INSTANCE_PRESENTATION_QOS\" value=\"0\"/>",
"<Element name=\"TOPIC_PRESENTATION_QOS\" value=\"1\"/><Element name=\"GROUP_PRESENTATION_QOS\" value=\"2\"/>",
"</Enum><TypeDef name=\"StringSeq\"><Sequence><String/></Sequence></TypeDef><Struct name=\"DurabilityQosPolicy\">",
"<Member name=\"kind\"><Type name=\"DurabilityQosPolicyKind\"/></Member></Struct><Struct name=\"TimeBasedFilterQosPolicy\">",
"<Member name=\"minimum_separation\"><Type name=\"Duration_t\"/></Member></Struct><Struct name=\"LatencyBudgetQosPolicy\">",
"<Member name=\"duration\"><Type name=\"Duration_t\"/></Member></Struct><Struct name=\"DeadlineQosPolicy\">",
"<Member name=\"period\"><Type name=\"Duration_t\"/></Member></Struct><Struct name=\"LivelinessQosPolicy\">",
"<Member name=\"kind\"><Type name=\"LivelinessQosPolicyKind\"/></Member><Member name=\"lease_duration\">",
"<Type name=\"Duration_t\"/></Member></Struct><Struct name=\"ReliabilityQosPolicy\"><Member name=\"kind\">",
"<Type name=\"ReliabilityQosPolicyKind\"/></Member><Member name=\"max_blocking_time\"><Type name=\"Duration_t\"/>",
"</Member><Member name=\"synchronous\"><Boolean/></Member></Struct><Struct name=\"OwnershipQosPolicy\">",
"<Member name=\"kind\"><Type name=\"OwnershipQosPolicyKind\"/></Member></Struct><Struct name=\"DestinationOrderQosPolicy\">",
"<Member name=\"kind\"><Type name=\"DestinationOrderQosPolicyKind\"/></Member></Struct><Struct name=\"GroupDataQosPolicy\">",
"<Member name=\"value\"><Type name=\"octSeq\"/></Member></Struct><Struct name=\"TopicDataQosPolicy\"><Member name=\"value\">",
"<Type name=\"octSeq\"/></Member></Struct><Struct name=\"UserDataQosPolicy\"><Member name=\"value\"><Type name=\"octSeq\"/>",
"</Member></Struct><Struct name=\"PresentationQosPolicy\"><Member name=\"access_scope\"><Type name=\"PresentationQosPolicyAccessScopeKind\"/>",
"</Member><Member name=\"coherent_access\"><Boolean/></Member><Member name=\"ordered_access\"><Boolean/>",
"</Member></Struct><Struct name=\"PartitionQosPolicy\"><Member name=\"name\"><Type name=\"StringSeq\"/>",
"</Member></Struct><Struct name=\"SubscriptionBuiltinTopicData\"><Member name=\"key\"><Type name=\"BuiltinTopicKey_t\"/>",
"</Member><Member name=\"participant_key\"><Type name=\"BuiltinTopicKey_t\"/></Member><Member name=\"topic_name\">",
"<String/></Member><Member name=\"type_name\"><String/></Member><Member name=\"durability\"><Type name=\"DurabilityQosPolicy\"/>",
"</Member><Member name=\"deadline\"><Type name=\"DeadlineQosPolicy\"/></Member><Member name=\"latency_budget\">",
"<Type name=\"LatencyBudgetQosPolicy\"/></Member><Member name=\"liveliness\"><Type name=\"LivelinessQosPolicy\"/>",
"</Member><Member name=\"reliability\"><Type name=\"ReliabilityQosPolicy\"/></Member><Member name=\"ownership\">",
"<Type name=\"OwnershipQosPolicy\"/></Member><Member name=\"destination_order\"><Type name=\"DestinationOrderQosPolicy\"/>",
"</Member><Member name=\"user_data\"><Type name=\"UserDataQosPolicy\"/></Member><Member name=\"time_based_filter\">",
"<Type name=\"TimeBasedFilterQosPolicy\"/></Member><Member name=\"presentation\"><Type name=\"PresentationQosPolicy\"/>",
"</Member><Member name=\"partition\"><Type name=\"PartitionQosPolicy\"/></Member><Member name=\"topic_data\">",
"<Type name=\"TopicDataQosPolicy\"/></Member><Member name=\"group_data\"><Type name=\"GroupDataQosPolicy\"/>",
"</Member></Struct></Module></MetaData>"};
const ::DDS::ULong (::DDS::SubscriptionBuiltinTopicDataTypeSupport::metaDescriptorArrLength) = 41;
