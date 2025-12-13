#define ICALL_TABLE_corlib 1

static int corlib_icall_indexes [] = {
220,
233,
234,
235,
236,
237,
238,
239,
240,
241,
244,
245,
246,
422,
423,
424,
452,
453,
454,
481,
482,
483,
600,
601,
602,
605,
643,
644,
645,
646,
647,
651,
653,
655,
657,
663,
671,
672,
673,
674,
675,
676,
677,
678,
679,
680,
681,
682,
683,
684,
685,
686,
687,
689,
690,
691,
692,
693,
694,
695,
792,
793,
794,
795,
796,
797,
798,
799,
800,
801,
802,
803,
804,
805,
806,
807,
808,
810,
811,
812,
813,
814,
815,
816,
878,
887,
888,
959,
966,
969,
971,
976,
977,
979,
980,
984,
985,
987,
988,
991,
992,
993,
996,
998,
1001,
1003,
1005,
1014,
1082,
1084,
1086,
1096,
1097,
1098,
1100,
1106,
1107,
1108,
1109,
1110,
1118,
1119,
1120,
1124,
1125,
1127,
1131,
1132,
1133,
1430,
1621,
1622,
10123,
10124,
10126,
10127,
10128,
10129,
10130,
10132,
10133,
10134,
10135,
10153,
10155,
10162,
10164,
10166,
10168,
10171,
10219,
10225,
10226,
10228,
10229,
10230,
10231,
10232,
10234,
10236,
11442,
11446,
11448,
11449,
11450,
11451,
11893,
11894,
11895,
11896,
11914,
11915,
11916,
11965,
12045,
12048,
12057,
12058,
12059,
12060,
12061,
12062,
12391,
12392,
12397,
12398,
12433,
12476,
12483,
12490,
12501,
12505,
12531,
12615,
12617,
12628,
12630,
12631,
12632,
12639,
12654,
12674,
12675,
12683,
12685,
12692,
12693,
12696,
12698,
12703,
12709,
12710,
12717,
12719,
12731,
12734,
12735,
12736,
12747,
12757,
12763,
12764,
12765,
12767,
12768,
12785,
12787,
12802,
12824,
12825,
12850,
12855,
12885,
12886,
13508,
13522,
13611,
13612,
13834,
13835,
13842,
13843,
13844,
13850,
13920,
14459,
14460,
14893,
14894,
14895,
14901,
14911,
15946,
15967,
15969,
15971,
};
void ves_icall_System_Array_InternalCreate (int,int,int,int,int);
int ves_icall_System_Array_GetCorElementTypeOfElementTypeInternal (int);
int ves_icall_System_Array_IsValueOfElementTypeInternal (int,int);
int ves_icall_System_Array_CanChangePrimitive (int,int,int);
int ves_icall_System_Array_FastCopy (int,int,int,int,int);
int ves_icall_System_Array_GetLengthInternal_raw (int,int,int);
int ves_icall_System_Array_GetLowerBoundInternal_raw (int,int,int);
void ves_icall_System_Array_GetGenericValue_icall (int,int,int);
void ves_icall_System_Array_GetValueImpl_raw (int,int,int,int);
void ves_icall_System_Array_SetGenericValue_icall (int,int,int);
void ves_icall_System_Array_SetValueImpl_raw (int,int,int,int);
void ves_icall_System_Array_InitializeInternal_raw (int,int);
void ves_icall_System_Array_SetValueRelaxedImpl_raw (int,int,int,int);
void ves_icall_System_Runtime_RuntimeImports_ZeroMemory (int,int);
void ves_icall_System_Runtime_RuntimeImports_Memmove (int,int,int);
void ves_icall_System_Buffer_BulkMoveWithWriteBarrier (int,int,int,int);
int ves_icall_System_Delegate_AllocDelegateLike_internal_raw (int,int);
int ves_icall_System_Delegate_CreateDelegate_internal_raw (int,int,int,int,int);
int ves_icall_System_Delegate_GetVirtualMethod_internal_raw (int,int);
void ves_icall_System_Enum_GetEnumValuesAndNames_raw (int,int,int,int);
int ves_icall_System_Enum_InternalGetCorElementType (int);
void ves_icall_System_Enum_InternalGetUnderlyingType_raw (int,int,int);
int ves_icall_System_Environment_get_ProcessorCount ();
int ves_icall_System_Environment_get_TickCount ();
int64_t ves_icall_System_Environment_get_TickCount64 ();
void ves_icall_System_Environment_FailFast_raw (int,int,int,int);
int ves_icall_System_GC_GetCollectionCount (int);
int ves_icall_System_GC_GetMaxGeneration ();
void ves_icall_System_GC_register_ephemeron_array_raw (int,int);
int ves_icall_System_GC_get_ephemeron_tombstone_raw (int);
int64_t ves_icall_System_GC_GetTotalAllocatedBytes_raw (int,int);
void ves_icall_System_GC_SuppressFinalize_raw (int,int);
void ves_icall_System_GC_ReRegisterForFinalize_raw (int,int);
void ves_icall_System_GC_GetGCMemoryInfo (int,int,int,int,int,int);
int ves_icall_System_GC_AllocPinnedArray_raw (int,int,int);
int ves_icall_System_Object_MemberwiseClone_raw (int,int);
double ves_icall_System_Math_Acos (double);
double ves_icall_System_Math_Acosh (double);
double ves_icall_System_Math_Asin (double);
double ves_icall_System_Math_Asinh (double);
double ves_icall_System_Math_Atan (double);
double ves_icall_System_Math_Atan2 (double,double);
double ves_icall_System_Math_Atanh (double);
double ves_icall_System_Math_Cbrt (double);
double ves_icall_System_Math_Ceiling (double);
double ves_icall_System_Math_Cos (double);
double ves_icall_System_Math_Cosh (double);
double ves_icall_System_Math_Exp (double);
double ves_icall_System_Math_Floor (double);
double ves_icall_System_Math_Log (double);
double ves_icall_System_Math_Log10 (double);
double ves_icall_System_Math_Pow (double,double);
double ves_icall_System_Math_Sin (double);
double ves_icall_System_Math_Sinh (double);
double ves_icall_System_Math_Sqrt (double);
double ves_icall_System_Math_Tan (double);
double ves_icall_System_Math_Tanh (double);
double ves_icall_System_Math_FusedMultiplyAdd (double,double,double);
double ves_icall_System_Math_Log2 (double);
double ves_icall_System_Math_ModF (double,int);
float ves_icall_System_MathF_Acos (float);
float ves_icall_System_MathF_Acosh (float);
float ves_icall_System_MathF_Asin (float);
float ves_icall_System_MathF_Asinh (float);
float ves_icall_System_MathF_Atan (float);
float ves_icall_System_MathF_Atan2 (float,float);
float ves_icall_System_MathF_Atanh (float);
float ves_icall_System_MathF_Cbrt (float);
float ves_icall_System_MathF_Ceiling (float);
float ves_icall_System_MathF_Cos (float);
float ves_icall_System_MathF_Cosh (float);
float ves_icall_System_MathF_Exp (float);
float ves_icall_System_MathF_Floor (float);
float ves_icall_System_MathF_Log (float);
float ves_icall_System_MathF_Log10 (float);
float ves_icall_System_MathF_Pow (float,float);
float ves_icall_System_MathF_Sin (float);
float ves_icall_System_MathF_Sinh (float);
float ves_icall_System_MathF_Sqrt (float);
float ves_icall_System_MathF_Tan (float);
float ves_icall_System_MathF_Tanh (float);
float ves_icall_System_MathF_FusedMultiplyAdd (float,float,float);
float ves_icall_System_MathF_Log2 (float);
float ves_icall_System_MathF_ModF (float,int);
int ves_icall_RuntimeMethodHandle_GetFunctionPointer_raw (int,int);
void ves_icall_RuntimeMethodHandle_ReboxFromNullable_raw (int,int,int);
void ves_icall_RuntimeMethodHandle_ReboxToNullable_raw (int,int,int,int);
int ves_icall_RuntimeType_GetCorrespondingInflatedMethod_raw (int,int,int);
void ves_icall_RuntimeType_make_array_type_raw (int,int,int,int);
void ves_icall_RuntimeType_make_byref_type_raw (int,int,int);
void ves_icall_RuntimeType_make_pointer_type_raw (int,int,int);
void ves_icall_RuntimeType_MakeGenericType_raw (int,int,int,int);
int ves_icall_RuntimeType_GetMethodsByName_native_raw (int,int,int,int,int);
int ves_icall_RuntimeType_GetPropertiesByName_native_raw (int,int,int,int,int);
int ves_icall_RuntimeType_GetConstructors_native_raw (int,int,int);
int ves_icall_System_RuntimeType_CreateInstanceInternal_raw (int,int);
void ves_icall_RuntimeType_GetDeclaringMethod_raw (int,int,int);
void ves_icall_System_RuntimeType_getFullName_raw (int,int,int,int,int);
void ves_icall_RuntimeType_GetGenericArgumentsInternal_raw (int,int,int,int);
int ves_icall_RuntimeType_GetGenericParameterPosition (int);
int ves_icall_RuntimeType_GetEvents_native_raw (int,int,int,int);
int ves_icall_RuntimeType_GetFields_native_raw (int,int,int,int,int);
void ves_icall_RuntimeType_GetInterfaces_raw (int,int,int);
int ves_icall_RuntimeType_GetNestedTypes_native_raw (int,int,int,int,int);
void ves_icall_RuntimeType_GetDeclaringType_raw (int,int,int);
void ves_icall_RuntimeType_GetName_raw (int,int,int);
void ves_icall_RuntimeType_GetNamespace_raw (int,int,int);
int ves_icall_RuntimeType_FunctionPointerReturnAndParameterTypes_raw (int,int);
int ves_icall_RuntimeTypeHandle_GetAttributes (int);
int ves_icall_RuntimeTypeHandle_GetMetadataToken_raw (int,int);
void ves_icall_RuntimeTypeHandle_GetGenericTypeDefinition_impl_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_GetCorElementType (int);
int ves_icall_RuntimeTypeHandle_HasInstantiation (int);
int ves_icall_RuntimeTypeHandle_IsInstanceOfType_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_HasReferences_raw (int,int);
int ves_icall_RuntimeTypeHandle_GetArrayRank_raw (int,int);
void ves_icall_RuntimeTypeHandle_GetAssembly_raw (int,int,int);
void ves_icall_RuntimeTypeHandle_GetElementType_raw (int,int,int);
void ves_icall_RuntimeTypeHandle_GetModule_raw (int,int,int);
void ves_icall_RuntimeTypeHandle_GetBaseType_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_type_is_assignable_from_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_IsGenericTypeDefinition (int);
int ves_icall_RuntimeTypeHandle_GetGenericParameterInfo_raw (int,int);
int ves_icall_RuntimeTypeHandle_is_subclass_of_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_IsByRefLike_raw (int,int);
void ves_icall_System_RuntimeTypeHandle_internal_from_name_raw (int,int,int,int,int,int);
int ves_icall_System_String_FastAllocateString_raw (int,int);
int ves_icall_System_String_InternalIsInterned_raw (int,int);
int ves_icall_System_String_InternalIntern_raw (int,int);
int ves_icall_System_Type_internal_from_handle_raw (int,int);
int ves_icall_System_ValueType_InternalGetHashCode_raw (int,int,int);
int ves_icall_System_ValueType_Equals_raw (int,int,int,int);
int ves_icall_System_Threading_Interlocked_CompareExchange_Int (int,int,int);
void ves_icall_System_Threading_Interlocked_CompareExchange_Object (int,int,int,int);
int ves_icall_System_Threading_Interlocked_Decrement_Int (int);
int ves_icall_System_Threading_Interlocked_Increment_Int (int);
int64_t ves_icall_System_Threading_Interlocked_Increment_Long (int);
int ves_icall_System_Threading_Interlocked_Exchange_Int (int,int);
void ves_icall_System_Threading_Interlocked_Exchange_Object (int,int,int);
int64_t ves_icall_System_Threading_Interlocked_CompareExchange_Long (int,int64_t,int64_t);
int64_t ves_icall_System_Threading_Interlocked_Exchange_Long (int,int64_t);
int ves_icall_System_Threading_Interlocked_Add_Int (int,int);
int64_t ves_icall_System_Threading_Interlocked_Add_Long (int,int64_t);
void ves_icall_System_Threading_Monitor_Monitor_Enter_raw (int,int);
void mono_monitor_exit_icall_raw (int,int);
void ves_icall_System_Threading_Monitor_Monitor_pulse_raw (int,int);
void ves_icall_System_Threading_Monitor_Monitor_pulse_all_raw (int,int);
int ves_icall_System_Threading_Monitor_Monitor_wait_raw (int,int,int,int);
void ves_icall_System_Threading_Monitor_Monitor_try_enter_with_atomic_var_raw (int,int,int,int,int);
int64_t ves_icall_System_Threading_Monitor_Monitor_get_lock_contention_count ();
void ves_icall_System_Threading_Thread_StartInternal_raw (int,int,int);
void ves_icall_System_Threading_Thread_InitInternal_raw (int,int);
int ves_icall_System_Threading_Thread_GetCurrentThread ();
void ves_icall_System_Threading_InternalThread_Thread_free_internal_raw (int,int);
int ves_icall_System_Threading_Thread_GetState_raw (int,int);
void ves_icall_System_Threading_Thread_SetState_raw (int,int,int);
void ves_icall_System_Threading_Thread_ClrState_raw (int,int,int);
void ves_icall_System_Threading_Thread_SetName_icall_raw (int,int,int,int);
int ves_icall_System_Threading_Thread_YieldInternal ();
void ves_icall_System_Threading_Thread_SetPriority_raw (int,int,int);
void ves_icall_System_Runtime_Loader_AssemblyLoadContext_PrepareForAssemblyLoadContextRelease_raw (int,int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_GetLoadContextForAssembly_raw (int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFile_raw (int,int,int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalInitializeNativeALC_raw (int,int,int,int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFromStream_raw (int,int,int,int,int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalGetLoadedAssemblies_raw (int);
int ves_icall_System_GCHandle_InternalAlloc_raw (int,int,int);
void ves_icall_System_GCHandle_InternalFree_raw (int,int);
int ves_icall_System_GCHandle_InternalGet_raw (int,int);
void ves_icall_System_GCHandle_InternalSet_raw (int,int,int);
int ves_icall_System_Runtime_InteropServices_Marshal_GetLastPInvokeError ();
void ves_icall_System_Runtime_InteropServices_Marshal_SetLastPInvokeError (int);
void ves_icall_System_Runtime_InteropServices_Marshal_StructureToPtr_raw (int,int,int,int);
int ves_icall_System_Runtime_InteropServices_NativeLibrary_LoadByName_raw (int,int,int,int,int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InternalGetHashCode_raw (int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetObjectValue_raw (int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetUninitializedObjectInternal_raw (int,int);
void ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InitializeArray_raw (int,int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetSpanDataFrom_raw (int,int,int,int);
void ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_RunClassConstructor_raw (int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_SufficientExecutionStack ();
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InternalBox_raw (int,int,int);
int ves_icall_System_Reflection_Assembly_GetExecutingAssembly_raw (int,int);
int ves_icall_System_Reflection_Assembly_GetEntryAssembly_raw (int);
int ves_icall_System_Reflection_Assembly_InternalLoad_raw (int,int,int,int);
int ves_icall_System_Reflection_Assembly_InternalGetType_raw (int,int,int,int,int,int);
int ves_icall_System_Reflection_AssemblyName_GetNativeName (int);
int ves_icall_MonoCustomAttrs_GetCustomAttributesInternal_raw (int,int,int,int);
int ves_icall_MonoCustomAttrs_GetCustomAttributesDataInternal_raw (int,int);
int ves_icall_MonoCustomAttrs_IsDefinedInternal_raw (int,int,int);
int ves_icall_System_Reflection_FieldInfo_internal_from_handle_type_raw (int,int,int);
int ves_icall_System_Reflection_FieldInfo_get_marshal_info_raw (int,int);
int ves_icall_System_Reflection_LoaderAllocatorScout_Destroy (int);
void ves_icall_System_Reflection_RuntimeAssembly_GetManifestResourceNames_raw (int,int,int);
void ves_icall_System_Reflection_RuntimeAssembly_GetExportedTypes_raw (int,int,int);
void ves_icall_System_Reflection_RuntimeAssembly_GetInfo_raw (int,int,int,int);
int ves_icall_System_Reflection_RuntimeAssembly_GetManifestResourceInternal_raw (int,int,int,int,int);
void ves_icall_System_Reflection_Assembly_GetManifestModuleInternal_raw (int,int,int);
void ves_icall_System_Reflection_RuntimeAssembly_GetModulesInternal_raw (int,int,int);
void ves_icall_System_Reflection_RuntimeCustomAttributeData_ResolveArgumentsInternal_raw (int,int,int,int,int,int,int);
void ves_icall_RuntimeEventInfo_get_event_info_raw (int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_System_Reflection_EventInfo_internal_from_handle_type_raw (int,int,int);
int ves_icall_RuntimeFieldInfo_ResolveType_raw (int,int);
int ves_icall_RuntimeFieldInfo_GetParentType_raw (int,int,int);
int ves_icall_RuntimeFieldInfo_GetFieldOffset_raw (int,int);
int ves_icall_RuntimeFieldInfo_GetValueInternal_raw (int,int,int);
void ves_icall_RuntimeFieldInfo_SetValueInternal_raw (int,int,int,int);
int ves_icall_RuntimeFieldInfo_GetRawConstantValue_raw (int,int);
int ves_icall_reflection_get_token_raw (int,int);
void ves_icall_get_method_info_raw (int,int,int);
int ves_icall_get_method_attributes (int);
int ves_icall_System_Reflection_MonoMethodInfo_get_parameter_info_raw (int,int,int);
int ves_icall_System_MonoMethodInfo_get_retval_marshal_raw (int,int);
int ves_icall_System_Reflection_RuntimeMethodInfo_GetMethodFromHandleInternalType_native_raw (int,int,int,int);
int ves_icall_RuntimeMethodInfo_get_name_raw (int,int);
int ves_icall_RuntimeMethodInfo_get_base_method_raw (int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_InternalInvoke_raw (int,int,int,int,int);
void ves_icall_RuntimeMethodInfo_GetPInvoke_raw (int,int,int,int,int);
int ves_icall_RuntimeMethodInfo_MakeGenericMethod_impl_raw (int,int,int);
int ves_icall_RuntimeMethodInfo_GetGenericArguments_raw (int,int);
int ves_icall_RuntimeMethodInfo_GetGenericMethodDefinition_raw (int,int);
int ves_icall_RuntimeMethodInfo_get_IsGenericMethodDefinition_raw (int,int);
int ves_icall_RuntimeMethodInfo_get_IsGenericMethod_raw (int,int);
void ves_icall_InvokeClassConstructor_raw (int,int);
int ves_icall_InternalInvoke_raw (int,int,int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
void ves_icall_System_Reflection_RuntimeModule_GetGuidInternal_raw (int,int,int);
int ves_icall_System_Reflection_RuntimeModule_ResolveMethodToken_raw (int,int,int,int,int,int);
int ves_icall_RuntimeParameterInfo_GetTypeModifiers_raw (int,int,int,int,int,int);
void ves_icall_RuntimePropertyInfo_get_property_info_raw (int,int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_System_Reflection_RuntimePropertyInfo_internal_from_handle_type_raw (int,int,int);
int ves_icall_CustomAttributeBuilder_GetBlob_raw (int,int,int,int,int,int,int,int);
void ves_icall_DynamicMethod_create_dynamic_method_raw (int,int,int,int,int);
void ves_icall_AssemblyBuilder_basic_init_raw (int,int);
void ves_icall_AssemblyBuilder_UpdateNativeCustomAttributes_raw (int,int);
void ves_icall_ModuleBuilder_basic_init_raw (int,int);
void ves_icall_ModuleBuilder_set_wrappers_type_raw (int,int,int);
int ves_icall_ModuleBuilder_getUSIndex_raw (int,int,int);
int ves_icall_ModuleBuilder_getToken_raw (int,int,int,int);
int ves_icall_ModuleBuilder_getMethodToken_raw (int,int,int,int);
void ves_icall_ModuleBuilder_RegisterToken_raw (int,int,int,int);
int ves_icall_TypeBuilder_create_runtime_class_raw (int,int);
int ves_icall_System_IO_Stream_HasOverriddenBeginEndRead_raw (int,int);
int ves_icall_System_IO_Stream_HasOverriddenBeginEndWrite_raw (int,int);
int ves_icall_System_Diagnostics_Debugger_IsAttached_internal ();
int ves_icall_System_Diagnostics_Debugger_IsLogging ();
void ves_icall_System_Diagnostics_Debugger_Log (int,int,int);
int ves_icall_System_Diagnostics_StackFrame_GetFrameInfo (int,int,int,int,int,int,int,int);
void ves_icall_System_Diagnostics_StackTrace_GetTrace (int,int,int,int);
int ves_icall_Mono_RuntimeClassHandle_GetTypeFromClass (int);
void ves_icall_Mono_RuntimeGPtrArrayHandle_GPtrArrayFree (int);
int ves_icall_Mono_SafeStringMarshal_StringToUtf8 (int);
void ves_icall_Mono_SafeStringMarshal_GFree (int);
static void *corlib_icall_funcs [] = {
// token 220,
ves_icall_System_Array_InternalCreate,
// token 233,
ves_icall_System_Array_GetCorElementTypeOfElementTypeInternal,
// token 234,
ves_icall_System_Array_IsValueOfElementTypeInternal,
// token 235,
ves_icall_System_Array_CanChangePrimitive,
// token 236,
ves_icall_System_Array_FastCopy,
// token 237,
ves_icall_System_Array_GetLengthInternal_raw,
// token 238,
ves_icall_System_Array_GetLowerBoundInternal_raw,
// token 239,
ves_icall_System_Array_GetGenericValue_icall,
// token 240,
ves_icall_System_Array_GetValueImpl_raw,
// token 241,
ves_icall_System_Array_SetGenericValue_icall,
// token 244,
ves_icall_System_Array_SetValueImpl_raw,
// token 245,
ves_icall_System_Array_InitializeInternal_raw,
// token 246,
ves_icall_System_Array_SetValueRelaxedImpl_raw,
// token 422,
ves_icall_System_Runtime_RuntimeImports_ZeroMemory,
// token 423,
ves_icall_System_Runtime_RuntimeImports_Memmove,
// token 424,
ves_icall_System_Buffer_BulkMoveWithWriteBarrier,
// token 452,
ves_icall_System_Delegate_AllocDelegateLike_internal_raw,
// token 453,
ves_icall_System_Delegate_CreateDelegate_internal_raw,
// token 454,
ves_icall_System_Delegate_GetVirtualMethod_internal_raw,
// token 481,
ves_icall_System_Enum_GetEnumValuesAndNames_raw,
// token 482,
ves_icall_System_Enum_InternalGetCorElementType,
// token 483,
ves_icall_System_Enum_InternalGetUnderlyingType_raw,
// token 600,
ves_icall_System_Environment_get_ProcessorCount,
// token 601,
ves_icall_System_Environment_get_TickCount,
// token 602,
ves_icall_System_Environment_get_TickCount64,
// token 605,
ves_icall_System_Environment_FailFast_raw,
// token 643,
ves_icall_System_GC_GetCollectionCount,
// token 644,
ves_icall_System_GC_GetMaxGeneration,
// token 645,
ves_icall_System_GC_register_ephemeron_array_raw,
// token 646,
ves_icall_System_GC_get_ephemeron_tombstone_raw,
// token 647,
ves_icall_System_GC_GetTotalAllocatedBytes_raw,
// token 651,
ves_icall_System_GC_SuppressFinalize_raw,
// token 653,
ves_icall_System_GC_ReRegisterForFinalize_raw,
// token 655,
ves_icall_System_GC_GetGCMemoryInfo,
// token 657,
ves_icall_System_GC_AllocPinnedArray_raw,
// token 663,
ves_icall_System_Object_MemberwiseClone_raw,
// token 671,
ves_icall_System_Math_Acos,
// token 672,
ves_icall_System_Math_Acosh,
// token 673,
ves_icall_System_Math_Asin,
// token 674,
ves_icall_System_Math_Asinh,
// token 675,
ves_icall_System_Math_Atan,
// token 676,
ves_icall_System_Math_Atan2,
// token 677,
ves_icall_System_Math_Atanh,
// token 678,
ves_icall_System_Math_Cbrt,
// token 679,
ves_icall_System_Math_Ceiling,
// token 680,
ves_icall_System_Math_Cos,
// token 681,
ves_icall_System_Math_Cosh,
// token 682,
ves_icall_System_Math_Exp,
// token 683,
ves_icall_System_Math_Floor,
// token 684,
ves_icall_System_Math_Log,
// token 685,
ves_icall_System_Math_Log10,
// token 686,
ves_icall_System_Math_Pow,
// token 687,
ves_icall_System_Math_Sin,
// token 689,
ves_icall_System_Math_Sinh,
// token 690,
ves_icall_System_Math_Sqrt,
// token 691,
ves_icall_System_Math_Tan,
// token 692,
ves_icall_System_Math_Tanh,
// token 693,
ves_icall_System_Math_FusedMultiplyAdd,
// token 694,
ves_icall_System_Math_Log2,
// token 695,
ves_icall_System_Math_ModF,
// token 792,
ves_icall_System_MathF_Acos,
// token 793,
ves_icall_System_MathF_Acosh,
// token 794,
ves_icall_System_MathF_Asin,
// token 795,
ves_icall_System_MathF_Asinh,
// token 796,
ves_icall_System_MathF_Atan,
// token 797,
ves_icall_System_MathF_Atan2,
// token 798,
ves_icall_System_MathF_Atanh,
// token 799,
ves_icall_System_MathF_Cbrt,
// token 800,
ves_icall_System_MathF_Ceiling,
// token 801,
ves_icall_System_MathF_Cos,
// token 802,
ves_icall_System_MathF_Cosh,
// token 803,
ves_icall_System_MathF_Exp,
// token 804,
ves_icall_System_MathF_Floor,
// token 805,
ves_icall_System_MathF_Log,
// token 806,
ves_icall_System_MathF_Log10,
// token 807,
ves_icall_System_MathF_Pow,
// token 808,
ves_icall_System_MathF_Sin,
// token 810,
ves_icall_System_MathF_Sinh,
// token 811,
ves_icall_System_MathF_Sqrt,
// token 812,
ves_icall_System_MathF_Tan,
// token 813,
ves_icall_System_MathF_Tanh,
// token 814,
ves_icall_System_MathF_FusedMultiplyAdd,
// token 815,
ves_icall_System_MathF_Log2,
// token 816,
ves_icall_System_MathF_ModF,
// token 878,
ves_icall_RuntimeMethodHandle_GetFunctionPointer_raw,
// token 887,
ves_icall_RuntimeMethodHandle_ReboxFromNullable_raw,
// token 888,
ves_icall_RuntimeMethodHandle_ReboxToNullable_raw,
// token 959,
ves_icall_RuntimeType_GetCorrespondingInflatedMethod_raw,
// token 966,
ves_icall_RuntimeType_make_array_type_raw,
// token 969,
ves_icall_RuntimeType_make_byref_type_raw,
// token 971,
ves_icall_RuntimeType_make_pointer_type_raw,
// token 976,
ves_icall_RuntimeType_MakeGenericType_raw,
// token 977,
ves_icall_RuntimeType_GetMethodsByName_native_raw,
// token 979,
ves_icall_RuntimeType_GetPropertiesByName_native_raw,
// token 980,
ves_icall_RuntimeType_GetConstructors_native_raw,
// token 984,
ves_icall_System_RuntimeType_CreateInstanceInternal_raw,
// token 985,
ves_icall_RuntimeType_GetDeclaringMethod_raw,
// token 987,
ves_icall_System_RuntimeType_getFullName_raw,
// token 988,
ves_icall_RuntimeType_GetGenericArgumentsInternal_raw,
// token 991,
ves_icall_RuntimeType_GetGenericParameterPosition,
// token 992,
ves_icall_RuntimeType_GetEvents_native_raw,
// token 993,
ves_icall_RuntimeType_GetFields_native_raw,
// token 996,
ves_icall_RuntimeType_GetInterfaces_raw,
// token 998,
ves_icall_RuntimeType_GetNestedTypes_native_raw,
// token 1001,
ves_icall_RuntimeType_GetDeclaringType_raw,
// token 1003,
ves_icall_RuntimeType_GetName_raw,
// token 1005,
ves_icall_RuntimeType_GetNamespace_raw,
// token 1014,
ves_icall_RuntimeType_FunctionPointerReturnAndParameterTypes_raw,
// token 1082,
ves_icall_RuntimeTypeHandle_GetAttributes,
// token 1084,
ves_icall_RuntimeTypeHandle_GetMetadataToken_raw,
// token 1086,
ves_icall_RuntimeTypeHandle_GetGenericTypeDefinition_impl_raw,
// token 1096,
ves_icall_RuntimeTypeHandle_GetCorElementType,
// token 1097,
ves_icall_RuntimeTypeHandle_HasInstantiation,
// token 1098,
ves_icall_RuntimeTypeHandle_IsInstanceOfType_raw,
// token 1100,
ves_icall_RuntimeTypeHandle_HasReferences_raw,
// token 1106,
ves_icall_RuntimeTypeHandle_GetArrayRank_raw,
// token 1107,
ves_icall_RuntimeTypeHandle_GetAssembly_raw,
// token 1108,
ves_icall_RuntimeTypeHandle_GetElementType_raw,
// token 1109,
ves_icall_RuntimeTypeHandle_GetModule_raw,
// token 1110,
ves_icall_RuntimeTypeHandle_GetBaseType_raw,
// token 1118,
ves_icall_RuntimeTypeHandle_type_is_assignable_from_raw,
// token 1119,
ves_icall_RuntimeTypeHandle_IsGenericTypeDefinition,
// token 1120,
ves_icall_RuntimeTypeHandle_GetGenericParameterInfo_raw,
// token 1124,
ves_icall_RuntimeTypeHandle_is_subclass_of_raw,
// token 1125,
ves_icall_RuntimeTypeHandle_IsByRefLike_raw,
// token 1127,
ves_icall_System_RuntimeTypeHandle_internal_from_name_raw,
// token 1131,
ves_icall_System_String_FastAllocateString_raw,
// token 1132,
ves_icall_System_String_InternalIsInterned_raw,
// token 1133,
ves_icall_System_String_InternalIntern_raw,
// token 1430,
ves_icall_System_Type_internal_from_handle_raw,
// token 1621,
ves_icall_System_ValueType_InternalGetHashCode_raw,
// token 1622,
ves_icall_System_ValueType_Equals_raw,
// token 10123,
ves_icall_System_Threading_Interlocked_CompareExchange_Int,
// token 10124,
ves_icall_System_Threading_Interlocked_CompareExchange_Object,
// token 10126,
ves_icall_System_Threading_Interlocked_Decrement_Int,
// token 10127,
ves_icall_System_Threading_Interlocked_Increment_Int,
// token 10128,
ves_icall_System_Threading_Interlocked_Increment_Long,
// token 10129,
ves_icall_System_Threading_Interlocked_Exchange_Int,
// token 10130,
ves_icall_System_Threading_Interlocked_Exchange_Object,
// token 10132,
ves_icall_System_Threading_Interlocked_CompareExchange_Long,
// token 10133,
ves_icall_System_Threading_Interlocked_Exchange_Long,
// token 10134,
ves_icall_System_Threading_Interlocked_Add_Int,
// token 10135,
ves_icall_System_Threading_Interlocked_Add_Long,
// token 10153,
ves_icall_System_Threading_Monitor_Monitor_Enter_raw,
// token 10155,
mono_monitor_exit_icall_raw,
// token 10162,
ves_icall_System_Threading_Monitor_Monitor_pulse_raw,
// token 10164,
ves_icall_System_Threading_Monitor_Monitor_pulse_all_raw,
// token 10166,
ves_icall_System_Threading_Monitor_Monitor_wait_raw,
// token 10168,
ves_icall_System_Threading_Monitor_Monitor_try_enter_with_atomic_var_raw,
// token 10171,
ves_icall_System_Threading_Monitor_Monitor_get_lock_contention_count,
// token 10219,
ves_icall_System_Threading_Thread_StartInternal_raw,
// token 10225,
ves_icall_System_Threading_Thread_InitInternal_raw,
// token 10226,
ves_icall_System_Threading_Thread_GetCurrentThread,
// token 10228,
ves_icall_System_Threading_InternalThread_Thread_free_internal_raw,
// token 10229,
ves_icall_System_Threading_Thread_GetState_raw,
// token 10230,
ves_icall_System_Threading_Thread_SetState_raw,
// token 10231,
ves_icall_System_Threading_Thread_ClrState_raw,
// token 10232,
ves_icall_System_Threading_Thread_SetName_icall_raw,
// token 10234,
ves_icall_System_Threading_Thread_YieldInternal,
// token 10236,
ves_icall_System_Threading_Thread_SetPriority_raw,
// token 11442,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_PrepareForAssemblyLoadContextRelease_raw,
// token 11446,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_GetLoadContextForAssembly_raw,
// token 11448,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFile_raw,
// token 11449,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalInitializeNativeALC_raw,
// token 11450,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFromStream_raw,
// token 11451,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalGetLoadedAssemblies_raw,
// token 11893,
ves_icall_System_GCHandle_InternalAlloc_raw,
// token 11894,
ves_icall_System_GCHandle_InternalFree_raw,
// token 11895,
ves_icall_System_GCHandle_InternalGet_raw,
// token 11896,
ves_icall_System_GCHandle_InternalSet_raw,
// token 11914,
ves_icall_System_Runtime_InteropServices_Marshal_GetLastPInvokeError,
// token 11915,
ves_icall_System_Runtime_InteropServices_Marshal_SetLastPInvokeError,
// token 11916,
ves_icall_System_Runtime_InteropServices_Marshal_StructureToPtr_raw,
// token 11965,
ves_icall_System_Runtime_InteropServices_NativeLibrary_LoadByName_raw,
// token 12045,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InternalGetHashCode_raw,
// token 12048,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetObjectValue_raw,
// token 12057,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetUninitializedObjectInternal_raw,
// token 12058,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InitializeArray_raw,
// token 12059,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetSpanDataFrom_raw,
// token 12060,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_RunClassConstructor_raw,
// token 12061,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_SufficientExecutionStack,
// token 12062,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InternalBox_raw,
// token 12391,
ves_icall_System_Reflection_Assembly_GetExecutingAssembly_raw,
// token 12392,
ves_icall_System_Reflection_Assembly_GetEntryAssembly_raw,
// token 12397,
ves_icall_System_Reflection_Assembly_InternalLoad_raw,
// token 12398,
ves_icall_System_Reflection_Assembly_InternalGetType_raw,
// token 12433,
ves_icall_System_Reflection_AssemblyName_GetNativeName,
// token 12476,
ves_icall_MonoCustomAttrs_GetCustomAttributesInternal_raw,
// token 12483,
ves_icall_MonoCustomAttrs_GetCustomAttributesDataInternal_raw,
// token 12490,
ves_icall_MonoCustomAttrs_IsDefinedInternal_raw,
// token 12501,
ves_icall_System_Reflection_FieldInfo_internal_from_handle_type_raw,
// token 12505,
ves_icall_System_Reflection_FieldInfo_get_marshal_info_raw,
// token 12531,
ves_icall_System_Reflection_LoaderAllocatorScout_Destroy,
// token 12615,
ves_icall_System_Reflection_RuntimeAssembly_GetManifestResourceNames_raw,
// token 12617,
ves_icall_System_Reflection_RuntimeAssembly_GetExportedTypes_raw,
// token 12628,
ves_icall_System_Reflection_RuntimeAssembly_GetInfo_raw,
// token 12630,
ves_icall_System_Reflection_RuntimeAssembly_GetManifestResourceInternal_raw,
// token 12631,
ves_icall_System_Reflection_Assembly_GetManifestModuleInternal_raw,
// token 12632,
ves_icall_System_Reflection_RuntimeAssembly_GetModulesInternal_raw,
// token 12639,
ves_icall_System_Reflection_RuntimeCustomAttributeData_ResolveArgumentsInternal_raw,
// token 12654,
ves_icall_RuntimeEventInfo_get_event_info_raw,
// token 12674,
ves_icall_reflection_get_token_raw,
// token 12675,
ves_icall_System_Reflection_EventInfo_internal_from_handle_type_raw,
// token 12683,
ves_icall_RuntimeFieldInfo_ResolveType_raw,
// token 12685,
ves_icall_RuntimeFieldInfo_GetParentType_raw,
// token 12692,
ves_icall_RuntimeFieldInfo_GetFieldOffset_raw,
// token 12693,
ves_icall_RuntimeFieldInfo_GetValueInternal_raw,
// token 12696,
ves_icall_RuntimeFieldInfo_SetValueInternal_raw,
// token 12698,
ves_icall_RuntimeFieldInfo_GetRawConstantValue_raw,
// token 12703,
ves_icall_reflection_get_token_raw,
// token 12709,
ves_icall_get_method_info_raw,
// token 12710,
ves_icall_get_method_attributes,
// token 12717,
ves_icall_System_Reflection_MonoMethodInfo_get_parameter_info_raw,
// token 12719,
ves_icall_System_MonoMethodInfo_get_retval_marshal_raw,
// token 12731,
ves_icall_System_Reflection_RuntimeMethodInfo_GetMethodFromHandleInternalType_native_raw,
// token 12734,
ves_icall_RuntimeMethodInfo_get_name_raw,
// token 12735,
ves_icall_RuntimeMethodInfo_get_base_method_raw,
// token 12736,
ves_icall_reflection_get_token_raw,
// token 12747,
ves_icall_InternalInvoke_raw,
// token 12757,
ves_icall_RuntimeMethodInfo_GetPInvoke_raw,
// token 12763,
ves_icall_RuntimeMethodInfo_MakeGenericMethod_impl_raw,
// token 12764,
ves_icall_RuntimeMethodInfo_GetGenericArguments_raw,
// token 12765,
ves_icall_RuntimeMethodInfo_GetGenericMethodDefinition_raw,
// token 12767,
ves_icall_RuntimeMethodInfo_get_IsGenericMethodDefinition_raw,
// token 12768,
ves_icall_RuntimeMethodInfo_get_IsGenericMethod_raw,
// token 12785,
ves_icall_InvokeClassConstructor_raw,
// token 12787,
ves_icall_InternalInvoke_raw,
// token 12802,
ves_icall_reflection_get_token_raw,
// token 12824,
ves_icall_System_Reflection_RuntimeModule_GetGuidInternal_raw,
// token 12825,
ves_icall_System_Reflection_RuntimeModule_ResolveMethodToken_raw,
// token 12850,
ves_icall_RuntimeParameterInfo_GetTypeModifiers_raw,
// token 12855,
ves_icall_RuntimePropertyInfo_get_property_info_raw,
// token 12885,
ves_icall_reflection_get_token_raw,
// token 12886,
ves_icall_System_Reflection_RuntimePropertyInfo_internal_from_handle_type_raw,
// token 13508,
ves_icall_CustomAttributeBuilder_GetBlob_raw,
// token 13522,
ves_icall_DynamicMethod_create_dynamic_method_raw,
// token 13611,
ves_icall_AssemblyBuilder_basic_init_raw,
// token 13612,
ves_icall_AssemblyBuilder_UpdateNativeCustomAttributes_raw,
// token 13834,
ves_icall_ModuleBuilder_basic_init_raw,
// token 13835,
ves_icall_ModuleBuilder_set_wrappers_type_raw,
// token 13842,
ves_icall_ModuleBuilder_getUSIndex_raw,
// token 13843,
ves_icall_ModuleBuilder_getToken_raw,
// token 13844,
ves_icall_ModuleBuilder_getMethodToken_raw,
// token 13850,
ves_icall_ModuleBuilder_RegisterToken_raw,
// token 13920,
ves_icall_TypeBuilder_create_runtime_class_raw,
// token 14459,
ves_icall_System_IO_Stream_HasOverriddenBeginEndRead_raw,
// token 14460,
ves_icall_System_IO_Stream_HasOverriddenBeginEndWrite_raw,
// token 14893,
ves_icall_System_Diagnostics_Debugger_IsAttached_internal,
// token 14894,
ves_icall_System_Diagnostics_Debugger_IsLogging,
// token 14895,
ves_icall_System_Diagnostics_Debugger_Log,
// token 14901,
ves_icall_System_Diagnostics_StackFrame_GetFrameInfo,
// token 14911,
ves_icall_System_Diagnostics_StackTrace_GetTrace,
// token 15946,
ves_icall_Mono_RuntimeClassHandle_GetTypeFromClass,
// token 15967,
ves_icall_Mono_RuntimeGPtrArrayHandle_GPtrArrayFree,
// token 15969,
ves_icall_Mono_SafeStringMarshal_StringToUtf8,
// token 15971,
ves_icall_Mono_SafeStringMarshal_GFree,
};
static uint8_t corlib_icall_flags [] = {
0,
0,
0,
0,
0,
4,
4,
0,
4,
0,
4,
4,
4,
0,
0,
0,
4,
4,
4,
4,
0,
4,
0,
0,
0,
4,
0,
0,
4,
4,
4,
4,
4,
0,
4,
4,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
0,
4,
4,
4,
4,
4,
4,
4,
4,
0,
4,
4,
0,
0,
4,
4,
4,
4,
4,
4,
4,
4,
0,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
4,
4,
4,
4,
4,
4,
0,
4,
4,
0,
4,
4,
4,
4,
4,
0,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
0,
0,
4,
4,
4,
4,
4,
4,
4,
4,
0,
4,
4,
4,
4,
4,
0,
4,
4,
4,
4,
4,
0,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
0,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
0,
0,
0,
0,
0,
0,
0,
0,
0,
};
