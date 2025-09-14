#include "pch-cpp.hpp"





template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtualFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

struct IEnumerable_1_t6686595E4CB7AC210F0EF075F7B1DD4A21D3902B;
struct IEnumerator_1_t889CCC5EFE6A6E3DAB66C7475F56D94D53F43D0E;
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
struct Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct FieldInfoU5BU5D_t50D47CBECF1AEB152F555803E3329D9E34DBF8D8;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
struct Animator_t8A52E42AE54F76681838FE9E632683EF3952E883;
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184;
struct CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B;
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
struct CaptureCollection_t38405272BD6A6DA77CD51487FD39624C6E95CC93;
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
struct DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2;
struct FieldInfo_t;
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931;
struct GroupCollection_tFFA1789730DD9EA122FBE77DC03BFEDCC3F2945E;
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
struct IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D;
struct Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F;
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
struct Regex_tE773142C2BE45C5D362B0F815AFF831707A51772;
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
struct ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E;
struct Scrollbar_t7CDC9B956698D9385A11E4C12964CD51477072C3;
struct String_t;
struct StringBuilder_t;
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
struct Type_t;
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
struct UnitySourceGeneratedAssemblyMonoScriptTypes_v1_t769BC63034F422B624EDC6CB8574DB6D6E303398;
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
struct CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD;
struct ReapplyDrivenProperties_t3482EA130A01FF7EE2EEFE37F66A5215D08CFE24;
struct U3CGetParentTypesU3Ed__12_t71E485860AB411A40B326CDA2EEB24ECC1316D1E;
struct ScrollRectEvent_t812C011901E6101F2A0FFC34C66AC5F65C0DEC26;

IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ReflectionUtils_tC59876FCD590777CA25AA95EC9DA88C9D2F3A59A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Regex_tE773142C2BE45C5D362B0F815AFF831707A51772_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TimeUtils_t1734A134ACD50BC7666BAF0EC4B861AC90A94259_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CGetParentTypesU3Ed__12_t71E485860AB411A40B326CDA2EEB24ECC1316D1E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_tDF20658D4D7D23CAC67870B8A65F87B85C67EBD0____527001DDBF3D4078738ABF12AF1BBD5AECE73CF0602AD570686D174F6368B8E7_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_tDF20658D4D7D23CAC67870B8A65F87B85C67EBD0____5B27119296BBAF6043E71986738141D2CB5ECE10B50B1C353BBF25DBF658195C_FieldInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral041AB57A6C173676A6BE0427A74832D5AE0E8D12;
IL2CPP_EXTERN_C String_t* _stringLiteral086C504C47273EF07233933225DBBAF9F1CBD69A;
IL2CPP_EXTERN_C String_t* _stringLiteral116273CD5D8FA85B2B09F79802D1EDD0C11FFC66;
IL2CPP_EXTERN_C String_t* _stringLiteral1925FA5108B30F8BDA1B28AF1A9E45B8685C7BE4;
IL2CPP_EXTERN_C String_t* _stringLiteral28BE9A569DCCAECC3746AA7945F873F6CD56F68E;
IL2CPP_EXTERN_C String_t* _stringLiteral3371C9C28E563AFD0A683CA126F078F3F07B7306;
IL2CPP_EXTERN_C String_t* _stringLiteral4E0BDF099CB5FAA2EDE75EA5A55F14561359873B;
IL2CPP_EXTERN_C String_t* _stringLiteral786D7B9ABEABE8160318F22124FD74BA126263AF;
IL2CPP_EXTERN_C String_t* _stringLiteral7AA4BB7C8FCBC083F3807847E9A9EE809C7E3CB6;
IL2CPP_EXTERN_C String_t* _stringLiteral7B0F74B596CC9D2DDF300DA4EFF02C6C830107ED;
IL2CPP_EXTERN_C String_t* _stringLiteral86953B386E543DC5AFB5CC6DFBD735EF7DAE369D;
IL2CPP_EXTERN_C String_t* _stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1;
IL2CPP_EXTERN_C String_t* _stringLiteral8A8EFDA91C6C257127F8C8D526FAD7E7552766AA;
IL2CPP_EXTERN_C String_t* _stringLiteral8C7F2B3D3E62077E7EF3F03BB193DA9784BB0905;
IL2CPP_EXTERN_C String_t* _stringLiteral900D858FE9ABCD2ED2B25CD27110A78ADCC6EC6B;
IL2CPP_EXTERN_C String_t* _stringLiteral94D92116D5FEFD4DDDBAE49BEC55B18F8EFE8B25;
IL2CPP_EXTERN_C String_t* _stringLiteral960E5E7F211EFF3243DF14EDD1901DC9EF314D62;
IL2CPP_EXTERN_C String_t* _stringLiteral9EF070BB4C5F488DD81FC57909F733A1C45CA703;
IL2CPP_EXTERN_C String_t* _stringLiteralA666314AE63414C47F8A839E0C1EE042AA5576AC;
IL2CPP_EXTERN_C String_t* _stringLiteralBF54BCA5EFFA7D5270F422DDA0C936A0C3ED83CF;
IL2CPP_EXTERN_C String_t* _stringLiteralD7D52FC864FBAB18F17165F5F2F678AD081BCEC7;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralE0EF24960D9E26D5A5C395E3A7D545AE022259AE;
IL2CPP_EXTERN_C String_t* _stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D;
IL2CPP_EXTERN_C const RuntimeMethod* U3CGetParentTypesU3Ed__12_System_Collections_IEnumerator_Reset_m6F4378FAD7EDCD9AB96C65B24C5EF3F604A04A83_RuntimeMethod_var;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct FieldInfoU5BU5D_t50D47CBECF1AEB152F555803E3329D9E34DBF8D8;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct U3CModuleU3E_t516D4A51B4CEB6B610184F67E428CCC7F432191E 
{
};
struct U3CPrivateImplementationDetailsU3E_tDF20658D4D7D23CAC67870B8A65F87B85C67EBD0  : public RuntimeObject
{
};
struct Bezier_tE6D11EC43765E47A76673E900F52DCCF6964B088  : public RuntimeObject
{
};
struct Capture_tE11B735186DAFEE5F7A3BF5A739E9CCCE99DC24A  : public RuntimeObject
{
	int32_t ___U3CIndexU3Ek__BackingField;
	int32_t ___U3CLengthU3Ek__BackingField;
	String_t* ___U3CTextU3Ek__BackingField;
};
struct CoreExtensions_tE27C4AA05B21D02A5D8701038A40512315178523  : public RuntimeObject
{
};
struct EnumUtils_t603F2F2308AFC69A87918BCD97719C5D1FCEC693  : public RuntimeObject
{
};
struct IOUtils_t363498D9984A2D9C45E8290390EE7BB868575508  : public RuntimeObject
{
};
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE  : public RuntimeObject
{
	RuntimeObject* ____identity;
};
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity;
};
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_com
{
	Il2CppIUnknown* ____identity;
};
struct MemberInfo_t  : public RuntimeObject
{
};
struct RagdollHelper_tB242F2BE650D16B1AA2CE59D245CB3DC901B4CFD  : public RuntimeObject
{
};
struct ReflectionUtils_tC59876FCD590777CA25AA95EC9DA88C9D2F3A59A  : public RuntimeObject
{
};
struct RuntimeEditorUtils_t74C26BBE130E11616A1BD7A0AA289C14F7906408  : public RuntimeObject
{
};
struct SceneUtils_tF33E7A83091369FA53AF7CF744136A7E3DB192A1  : public RuntimeObject
{
};
struct String_t  : public RuntimeObject
{
	int32_t ____stringLength;
	Il2CppChar ____firstChar;
};
struct StringBuilder_t  : public RuntimeObject
{
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_ChunkChars;
	StringBuilder_t* ___m_ChunkPrevious;
	int32_t ___m_ChunkLength;
	int32_t ___m_ChunkOffset;
	int32_t ___m_MaxCapacity;
};
struct TextureExtensions_t2B949769DE15E8DA0A9A17E94B69AA1537252885  : public RuntimeObject
{
};
struct TimeUtils_t1734A134ACD50BC7666BAF0EC4B861AC90A94259  : public RuntimeObject
{
};
struct UnitySourceGeneratedAssemblyMonoScriptTypes_v1_t769BC63034F422B624EDC6CB8574DB6D6E303398  : public RuntimeObject
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};
struct ExtendedRandom_t78E4F85F451F340643BC543AE55D58FEF4B7DF89  : public RuntimeObject
{
};
struct U3CGetParentTypesU3Ed__12_t71E485860AB411A40B326CDA2EEB24ECC1316D1E  : public RuntimeObject
{
	int32_t ___U3CU3E1__state;
	Type_t* ___U3CU3E2__current;
	int32_t ___U3CU3El__initialThreadId;
	Type_t* ___type;
	Type_t* ___U3CU3E3__type;
	Type_t* ___U3CbaseTypeU3E5__2;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	bool ___m_value;
};
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	uint8_t ___m_value;
};
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	Il2CppChar ___m_value;
};
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	float ___r;
	float ___g;
	float ___b;
	float ___a;
};
struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D 
{
	uint64_t ____dateData;
};
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	double ___m_value;
};
struct DrivenRectTransformTracker_tFB0706C933E3C68E4F377C204FCEEF091F1EE0B1 
{
	union
	{
		struct
		{
		};
		uint8_t DrivenRectTransformTracker_tFB0706C933E3C68E4F377C204FCEEF091F1EE0B1__padding[1];
	};
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
};
struct FieldInfo_t  : public MemberInfo_t
{
};
struct Group_t26371E9136D6F43782C487B63C67C5FC4F472881  : public Capture_tE11B735186DAFEE5F7A3BF5A739E9CCCE99DC24A
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____caps;
	int32_t ____capcount;
	CaptureCollection_t38405272BD6A6DA77CD51487FD39624C6E95CC93* ____capcoll;
	String_t* ___U3CNameU3Ek__BackingField;
};
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	int32_t ___m_value;
};
struct IntPtr_t 
{
	void* ___m_value;
};
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	float ___x;
	float ___y;
	float ___z;
	float ___w;
};
struct Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D 
{
	float ___m_XMin;
	float ___m_YMin;
	float ___m_Width;
	float ___m_Height;
};
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	float ___m_value;
};
struct TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A 
{
	int64_t ____ticks;
};
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	float ___x;
	float ___y;
};
struct Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A 
{
	int32_t ___m_X;
	int32_t ___m_Y;
};
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	float ___x;
	float ___y;
	float ___z;
};
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	float ___x;
	float ___y;
	float ___z;
	float ___w;
};
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D323_tA4B4E28C871B28918C0E06D4BCDD44E32A86199E 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D323_tA4B4E28C871B28918C0E06D4BCDD44E32A86199E__padding[323];
	};
};
#pragma pack(pop, tp)
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D807_t48D88003FE9DC4494F2D9F97F0A4A62BB6F288DE 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D807_t48D88003FE9DC4494F2D9F97F0A4A62BB6F288DE__padding[807];
	};
};
#pragma pack(pop, tp)
struct MonoScriptData_tA2A0A26732AD400024940028C971A8CF630941AB 
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___FilePathsData;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___TypesData;
	int32_t ___TotalTypes;
	int32_t ___TotalFiles;
	bool ___IsEditorOnly;
};
struct MonoScriptData_tA2A0A26732AD400024940028C971A8CF630941AB_marshaled_pinvoke
{
	Il2CppSafeArray* ___FilePathsData;
	Il2CppSafeArray* ___TypesData;
	int32_t ___TotalTypes;
	int32_t ___TotalFiles;
	int32_t ___IsEditorOnly;
};
struct MonoScriptData_tA2A0A26732AD400024940028C971A8CF630941AB_marshaled_com
{
	Il2CppSafeArray* ___FilePathsData;
	Il2CppSafeArray* ___TypesData;
	int32_t ___TotalTypes;
	int32_t ___TotalFiles;
	int32_t ___IsEditorOnly;
};
struct FILE_TIME_tBD950B410C18B85474477EEA8F3651A2BD367965 
{
	uint32_t ___dwLowDateTime;
	uint32_t ___dwHighDateTime;
};
struct BindingFlags_t5DC2835E4AE9C1862B3AD172EF35B6A5F4F1812C 
{
	int32_t ___value__;
};
struct Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Center;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Extents;
};
struct DateTimeKind_t3AD6DA06BEF8955A740777163FFB481C19089BBC 
{
	int32_t ___value__;
};
struct Exception_t  : public RuntimeObject
{
	String_t* ____className;
	String_t* ____message;
	RuntimeObject* ____data;
	Exception_t* ____innerException;
	String_t* ____helpURL;
	RuntimeObject* ____stackTrace;
	String_t* ____stackTraceString;
	String_t* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	RuntimeObject* ____dynamicMethods;
	int32_t ____HResult;
	String_t* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct Exception_t_marshaled_pinvoke
{
	char* ____className;
	char* ____message;
	RuntimeObject* ____data;
	Exception_t_marshaled_pinvoke* ____innerException;
	char* ____helpURL;
	Il2CppIUnknown* ____stackTrace;
	char* ____stackTraceString;
	char* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	Il2CppIUnknown* ____dynamicMethods;
	int32_t ____HResult;
	char* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	Il2CppSafeArray* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className;
	Il2CppChar* ____message;
	RuntimeObject* ____data;
	Exception_t_marshaled_com* ____innerException;
	Il2CppChar* ____helpURL;
	Il2CppIUnknown* ____stackTrace;
	Il2CppChar* ____stackTraceString;
	Il2CppChar* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	Il2CppIUnknown* ____dynamicMethods;
	int32_t ____HResult;
	Il2CppChar* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	Il2CppSafeArray* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F  : public Group_t26371E9136D6F43782C487B63C67C5FC4F472881
{
	GroupCollection_tFFA1789730DD9EA122FBE77DC03BFEDCC3F2945E* ____groupcoll;
	Regex_tE773142C2BE45C5D362B0F815AFF831707A51772* ____regex;
	int32_t ____textbeg;
	int32_t ____textpos;
	int32_t ____textend;
	int32_t ____textstart;
	Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* ____matches;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____matchcount;
	bool ____balancing;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	intptr_t ___m_CachedPtr;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr;
};
struct RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 
{
	intptr_t ___value;
};
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	intptr_t ___value;
};
struct StringSplitOptions_t4DD892C76C70DD4800FC1B76054D69826F770062 
{
	int32_t ___value__;
};
struct MovementType_t35B76DF2E479A4C67D7768854404EFB47BF1BBB6 
{
	int32_t ___value__;
};
struct ScrollbarVisibility_t04A8B197CECE292E71BBB9145B1CA95BD450383E 
{
	int32_t ___value__;
};
struct WIN32_FILE_ATTRIBUTE_DATA_tD093F8658579DA72CCD2E158A681DDE37834F73B 
{
	int32_t ___dwFileAttributes;
	FILE_TIME_tBD950B410C18B85474477EEA8F3651A2BD367965 ___ftCreationTime;
	FILE_TIME_tBD950B410C18B85474477EEA8F3651A2BD367965 ___ftLastAccessTime;
	FILE_TIME_tBD950B410C18B85474477EEA8F3651A2BD367965 ___ftLastWriteTime;
	uint32_t ___nFileSizeHigh;
	uint32_t ___nFileSizeLow;
};
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
struct FileSystemInfo_tE3063B9229F46B05A5F6D018C8C4CA510104E8E9  : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE
{
	WIN32_FILE_ATTRIBUTE_DATA_tD093F8658579DA72CCD2E158A681DDE37834F73B ____data;
	int32_t ____dataInitialized;
	String_t* ___FullPath;
	String_t* ___OriginalPath;
	String_t* ____name;
};
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
struct Type_t  : public MemberInfo_t
{
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl;
};
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};
struct DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2  : public FileSystemInfo_tE3063B9229F46B05A5F6D018C8C4CA510104E8E9
{
};
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4  : public Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700
{
};
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};
struct Animator_t8A52E42AE54F76681838FE9E632683EF3952E883  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
	uint32_t ___m_NonSerializedVersion;
};
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ___m_CancellationTokenSource;
};
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5  : public Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1
{
};
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_Material;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_Color;
	bool ___m_SkipLayoutUpdate;
	bool ___m_SkipMaterialUpdate;
	bool ___m_RaycastTarget;
	bool ___m_RaycastTargetCache;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_RaycastPadding;
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_RectTransform;
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CanvasRenderer;
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_Canvas;
	bool ___m_VertsDirty;
	bool ___m_MaterialDirty;
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyLayoutCallback;
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyVertsCallback;
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyMaterialCallback;
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_CachedMesh;
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___m_CachedUvs;
	TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4* ___m_ColorTweenRunner;
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField;
};
struct ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_Content;
	bool ___m_Horizontal;
	bool ___m_Vertical;
	int32_t ___m_MovementType;
	float ___m_Elasticity;
	bool ___m_Inertia;
	float ___m_DecelerationRate;
	float ___m_ScrollSensitivity;
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_Viewport;
	Scrollbar_t7CDC9B956698D9385A11E4C12964CD51477072C3* ___m_HorizontalScrollbar;
	Scrollbar_t7CDC9B956698D9385A11E4C12964CD51477072C3* ___m_VerticalScrollbar;
	int32_t ___m_HorizontalScrollbarVisibility;
	int32_t ___m_VerticalScrollbarVisibility;
	float ___m_HorizontalScrollbarSpacing;
	float ___m_VerticalScrollbarSpacing;
	ScrollRectEvent_t812C011901E6101F2A0FFC34C66AC5F65C0DEC26* ___m_OnValueChanged;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PointerStartLocalCursor;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_ContentStartPosition;
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_ViewRect;
	Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 ___m_ContentBounds;
	Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 ___m_ViewBounds;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Velocity;
	bool ___m_Dragging;
	bool ___m_Scrolling;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PrevPosition;
	Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 ___m_PrevContentBounds;
	Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 ___m_PrevViewBounds;
	bool ___m_HasRebuiltLayout;
	bool ___m_HSliderExpand;
	bool ___m_VSliderExpand;
	float ___m_HSliderHeight;
	float ___m_VSliderWidth;
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_Rect;
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_HorizontalScrollbarRect;
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_VerticalScrollbarRect;
	DrivenRectTransformTracker_tFB0706C933E3C68E4F377C204FCEEF091F1EE0B1 ___m_Tracker;
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_Corners;
};
struct U3CPrivateImplementationDetailsU3E_tDF20658D4D7D23CAC67870B8A65F87B85C67EBD0_StaticFields
{
	__StaticArrayInitTypeSizeU3D807_t48D88003FE9DC4494F2D9F97F0A4A62BB6F288DE ___527001DDBF3D4078738ABF12AF1BBD5AECE73CF0602AD570686D174F6368B8E7;
	__StaticArrayInitTypeSizeU3D323_tA4B4E28C871B28918C0E06D4BCDD44E32A86199E ___5B27119296BBAF6043E71986738141D2CB5ECE10B50B1C353BBF25DBF658195C;
};
struct ReflectionUtils_tC59876FCD590777CA25AA95EC9DA88C9D2F3A59A_StaticFields
{
	int32_t ___FLAGS_INSTANCE;
	int32_t ___FLAGS_STATIC;
	int32_t ___FLAGS_INSTANCE_PRIVATE;
	int32_t ___FLAGS_INSTANCE_PUBLIC;
	int32_t ___FLAGS_STATIC_PRIVATE;
	int32_t ___FLAGS_STATIC_PUBLIC;
};
struct String_t_StaticFields
{
	String_t* ___Empty;
};
struct TimeUtils_t1734A134ACD50BC7666BAF0EC4B861AC90A94259_StaticFields
{
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___DEFAULT_DATE_UNIX;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	String_t* ___TrueString;
	String_t* ___FalseString;
};
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1;
};
struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_StaticFields
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_daysToMonth365;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_daysToMonth366;
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___MinValue;
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___MaxValue;
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___UnixEpoch;
};
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion;
};
struct TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_StaticFields
{
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___Zero;
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___MaxValue;
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___MinValue;
};
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector;
};
struct Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A_StaticFields
{
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Zero;
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_One;
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Up;
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Down;
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Left;
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Right;
};
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector;
};
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_StaticFields
{
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___zeroVector;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___oneVector;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___positiveInfinityVector;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___negativeInfinityVector;
};
struct Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F_StaticFields
{
	Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F* ___U3CEmptyU3Ek__BackingField;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject;
};
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700_StaticFields
{
	int32_t ___GenerateAllMips;
};
struct Type_t_StaticFields
{
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder;
	Il2CppChar ___Delimiter;
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes;
	RuntimeObject* ___Missing;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase;
};
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_StaticFields
{
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreCull;
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreRender;
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPostRender;
};
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_StaticFields
{
	ReapplyDrivenProperties_t3482EA130A01FF7EE2EEFE37F66A5215D08CFE24* ___reapplyDrivenProperties;
};
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_StaticFields
{
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultUI;
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___s_WhiteTexture;
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___s_Mesh;
	VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___s_VertexHelper;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};
struct FieldInfoU5BU5D_t50D47CBECF1AEB152F555803E3329D9E34DBF8D8  : public RuntimeArray
{
	ALIGN_FIELD (8) FieldInfo_t* m_Items[1];

	inline FieldInfo_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline FieldInfo_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, FieldInfo_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline FieldInfo_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline FieldInfo_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, FieldInfo_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248  : public RuntimeArray
{
	ALIGN_FIELD (8) String_t* m_Items[1];

	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C  : public RuntimeArray
{
	ALIGN_FIELD (8) Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 m_Items[1];

	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 value)
	{
		m_Items[index] = value;
	}
};



IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B (RuntimeArray* ___0_array, RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 ___1_fldHandle, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Random_get_value_m2CEA87FADF5222EF9E13D32695F15E2BA282E24B (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Regex_Replace_m811FCA60D20059998EC547FC390F053C524D045D (String_t* ___0_input, String_t* ___1_pattern, String_t* ___2_replacement, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F* Regex_Match_mE3EC82B72BF82AA4B8749251C12C383047531972 (String_t* ___0_input, String_t* ___1_pattern, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Transform_get_childCount_mE9C29C702AB662CC540CA053EDE48BDAFA35B4B0 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_SetLocalPositionAndRotation_m0FB0FCF462AB7CD21880042918BCC372A59E734D (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_localPosition, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___1_localRotation, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_SetPositionAndRotation_m418859BF59086EEAA084FFD6F258A43FAB408F5A (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_position, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___1_rotation, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* Graphic_get_rectTransform_mF4752E8934267D630810E84CE02CDFB81EB1FD6D (Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 RectTransform_get_sizeDelta_m822A8493F2035677384F1540A2E9E5ACE63010BB (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 CoreExtensions_SetX_mDA0794628479534B9EE9E676DB38FE0C33DD5FA3 (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_vector, float ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectTransform_set_sizeDelta_mC9A980EA6036E6725EF24CEDF3EE80A9B2B50EE5 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float CoreExtensions_GetWidth_m55E3784EB53BE0192B5EAF5A044F986B37743B40_inline (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___0_rect, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* CoreExtensions_SetAnchoredPositionX_m97F2E12AA08861E704EE2C935535D4331694549C_inline (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___0_rectTransform, float ___1_x, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* CoreExtensions_SetAnchoredPositionY_mE704B5BD23B79CD653E3B4986B08C0B4017F78F7_inline (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___0_rectTransform, float ___1_y, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 RectTransform_get_anchoredPosition_m38F25A4253B0905BB058BE73DBF43C7172CE0680 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectTransform_set_anchoredPosition_mF903ACE04F6959B1CD67E2B94FABC0263068F965 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 CoreExtensions_SetY_mFDB1C9FA6F98B610A0B74513944A019EC9A69F0F (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_vector, float ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Camera_ScreenToWorldPoint_m5EA3148F070985EC72127AAC3448D8D6ABE6E7E5 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_position, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494 (float ___0_minInclusive, float ___1_maxInclusive, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68 (int32_t ___0_minInclusive, int32_t ___1_maxExclusive, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Bounds_get_size_m0699A53A55A78B3201D7270D6F338DFA91B6FAD4_inline (Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Bounds_get_center_m5B05F81CB835EB6DD8628FDA24B638F477984DC3_inline (Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_rotation, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_point, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___0_x, float ___1_y, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector2Int_get_x_mA2CACB1B6E6B5AD0CCC32B2CD2EDCE3ECEB50576_inline (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2Int_set_x_m291ECF246536852F0B8EE049C4A3768E4999CDC8_inline (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* __this, int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector2Int_get_y_m48454163ECF0B463FB5A16A0C4FC4B14DB0768B3_inline (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2Int_set_y_mF81881204EEE272BA409728C7EBFDE3A979DDF6A_inline (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* __this, int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2Int__ctor_mC20D1312133EB8CB63EC11067088B043660F11CE_inline (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* __this, int32_t ___0_x, int32_t ___1_y, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline (float ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C (String_t* ___0_format, RuntimeObject* ___1_arg0, RuntimeObject* ___2_arg1, RuntimeObject* ___3_arg2, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F CoreExtensions_SetAlpha_m21D482D1098D3FECE2BFEBA41F05B1BA23021FC0 (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_color, float ___1_aValue, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_Clamp_m4DC36EEFDBE5F07C16249DA568023C5ECCFF0E7B_inline (int32_t ___0_value, int32_t ___1_min, int32_t ___2_max, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D (StringBuilder_t* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B (String_t* ___0_str0, String_t* ___1_str1, String_t* ___2_str2, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_AppendLine_mF75744CE941C63E33188E22E936B71A24D3CBF88 (StringBuilder_t* __this, String_t* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CoreExtensions_GetFields_m0640DD1BE4E6611D6E216598495F0FB6E00AEF99 (int32_t ___0_depth, int32_t ___1_maxDepth, String_t* ___2_space, RuntimeObject* ___3_parentObject, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478 (String_t* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D (StringBuilder_t* __this, String_t* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3 (RuntimeObject* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_get_IsClass_mACC1E0E79C9996ADE9973F81971B740132B64549 (Type_t* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___0_handle, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172 (Type_t* ___0_left, Type_t* ___1_right, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673 (Type_t* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m093934F71A9B351911EE46311674ED463B180006 (String_t* ___0_str0, String_t* ___1_str1, String_t* ___2_str2, String_t* ___3_str3, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___0_values, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___0_str0, String_t* ___1_str1, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ScrollRect_get_viewport_m85092216DD476F77E78F5CE50F9C4E70063ECCF9_inline (ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_InverseTransformPoint_m18CD395144D9C78F30E15A5B82B6670E792DBA5D (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_position, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D RectTransform_get_rect_mC82A60F8C3805ED9833508CCC233689641207488 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8_inline (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, float ___1_d, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CoreExtensions_SnapToTarget_mBA1B5F76F59248304941F99CAA7E330159BF39C4 (ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E* ___0_scrollRect, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_target, float ___2_offsetX, float ___3_offsetY, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ScrollRect_get_content_m7878BCA28A96B7FBA02DC466A1ED2C9E191C6996_inline (ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_v, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool ScrollRect_get_horizontal_mDA4358EF29CE64E6B346D6CC5D70E08F00D3D05B_inline (ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool ScrollRect_get_vertical_m43F2C650302CB71D53A0A373934CA9F9921CC38B_inline (ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Subtraction_m44475FCDAD2DA2F98D78A6625EC2DCDFE8803837_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_a, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_b, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_Lerp_m1A36103F7967F653A929556E26E6D052C298C00C_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_a, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_b, float ___2_t, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D_SetPixel_m2CCFC5F729135D59DC4A697C2605A3FC5C8574DB (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* __this, int32_t ___0_x, int32_t ___1_y, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___2_color, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Lerp_m3A906D0530A94FAABB94F0F905E84D99BE85C3F8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, float ___2_t, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Bezier_EvaluateQuadratic_mED1DAEEA2B1329815ED4DBDA54947DDAC29C110F (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___2_c, float ___3_t, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Bezier_AproximateLength_mAACCE932DDE5B5BF77AA2F76189E5A68E2FCD1F2 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_p0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_p1, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___2_p2, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___3_p3, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Directory_Exists_m3D125E9E88C291CF11113444F961A64DD83AE1C7 (String_t* ___0_path, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* String_Split_m9530B73D02054692283BF35C3A27C8F2230946F4 (String_t* __this, Il2CppChar ___0_separator, int32_t ___1_options, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2* Directory_CreateDirectory_m16EC5CE8561A997C6635E06DC24C77590F29D94F (String_t* ___0_path, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetParentTypesU3Ed__12__ctor_m3F8BF5C90AE67171C1F6FCCF7440AE2F5C59A65D (U3CGetParentTypesU3Ed__12_t71E485860AB411A40B326CDA2EEB24ECC1316D1E* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Environment_get_CurrentManagedThreadId_m66483AADCCC13272EBDCD94D31D2E52603C24BDF (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGetParentTypesU3Ed__12_System_Collections_Generic_IEnumerableU3CSystem_TypeU3E_GetEnumerator_mFBE5F6BAF8828090F6BABA58B640870E9BA7B87C (U3CGetParentTypesU3Ed__12_t71E485860AB411A40B326CDA2EEB24ECC1316D1E* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SceneUtility_GetScenePathByBuildIndex_mB0848A585AFBB0C15CB344C43BD7BF79B1FEE860 (int32_t ___0_buildIndex, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t String_LastIndexOf_m8923DBD89F2B3E5A34190B038B48F402E0C17E40 (String_t* __this, String_t* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE (String_t* __this, int32_t ___0_startIndex, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t String_Compare_m9772C6EB9834E1AD625F4663FB9A519AB10A3A14 (String_t* ___0_strA, String_t* ___1_strB, bool ___2_ignoreCase, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SceneManager_get_sceneCountInBuildSettings_m414CDE36617596AC75C8E1A03DA65752A09A8944 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D DateTime_get_Now_m636CB9651A9099D20BA1CF813A0C69637317325C (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A DateTime_op_Subtraction_m64D26F5ABFAE6E166A7E567093D025F6C69F0123 (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___0_d1, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___1_d2, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double TimeSpan_get_TotalSeconds_mED686E7CECE6A76A7DC38518698B9199DB8CDEA8 (TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D DateTime_AddDays_m9DC06105845A82FEAF697D5E30308ABD49E5721B (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* __this, double ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D DateTime_AddHours_m99C41C078F2F480BF9965F8A4BAB8C8B75C39C02 (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* __this, double ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D DateTime_AddMinutes_m8B24125F1100B23A1D9D9361A2745577062E0D91 (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* __this, double ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D DateTime_AddSeconds_mC5FE3FB22A1295CA747746ECE48B9D4A4B6B2E81 (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* __this, double ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DateTime_get_Hour_m350B2AEB6ED8AAD80F0779C1FD37EEE13952A7F3 (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DateTime_get_Minute_m73003491DA85D2C9951ECCF890D9BF6AFFB9E973 (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DateTime_get_Second_mC860BA28DED65249BE9EA46E4898730C7828B3EA (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DateTime_get_Kind_m83D45222D9386873333A178B9AB31AC2B2F2C993 (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DateTime__ctor_mD89390EF215242275A4E8F78C2C3E8BC3EF6F3C3 (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* __this, int32_t ___0_year, int32_t ___1_month, int32_t ___2_day, int32_t ___3_hour, int32_t ___4_minute, int32_t ___5_second, int32_t ___6_kind, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DateTime_ToString_m6963A84785C320DA776C9FCFFEDAF26C8F1A8D78 (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* __this, String_t* ___0_format, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A TimeSpan_FromMinutes_m5748E4C33327BC758C73B6DAE1BDD6BF44711CB5 (double ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Replace_mABDB7003A1D0AEDCAE9FF85E3DFFFBA752D2A166 (String_t* __this, String_t* ___0_oldValue, String_t* ___1_newValue, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double TimeSpan_get_TotalMinutes_mD139AD7A9055F460D2ACC8B0D2BC4A70009E1115 (TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double TimeSpan_get_TotalHours_m753DFC812CEC8F9214EF5F9839C5B4A4DB0D2883 (TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TimeSpan_get_Seconds_m8CA21613DC31BD025C5D30D41BAD0ED50827578B (TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TimeSpan_get_Minutes_m93E37D01CD6DA2DE5B35609D740D322E270B678F (TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TimeSpan_get_Hours_m770B4B777A816E051EFDA317C28DA9A4F39D6CFB (TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DateTime__ctor_m1F66A4327FE6B127F0F0E83A70CED25DB0DFFB00 (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* __this, int32_t ___0_year, int32_t ___1_month, int32_t ___2_day, int32_t ___3_hour, int32_t ___4_minute, int32_t ___5_second, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MonoScriptData_tA2A0A26732AD400024940028C971A8CF630941AB UnitySourceGeneratedAssemblyMonoScriptTypes_v1_Get_mBA9E83042790FC226FD924631FC0533F5BC12E21 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_tDF20658D4D7D23CAC67870B8A65F87B85C67EBD0____527001DDBF3D4078738ABF12AF1BBD5AECE73CF0602AD570686D174F6368B8E7_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_tDF20658D4D7D23CAC67870B8A65F87B85C67EBD0____5B27119296BBAF6043E71986738141D2CB5ECE10B50B1C353BBF25DBF658195C_FieldInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MonoScriptData_tA2A0A26732AD400024940028C971A8CF630941AB V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(MonoScriptData_tA2A0A26732AD400024940028C971A8CF630941AB));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)807));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = L_0;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_2 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tDF20658D4D7D23CAC67870B8A65F87B85C67EBD0____527001DDBF3D4078738ABF12AF1BBD5AECE73CF0602AD570686D174F6368B8E7_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_1, L_2, NULL);
		(&V_0)->___FilePathsData = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___FilePathsData), (void*)L_1);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)323));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = L_3;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_5 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tDF20658D4D7D23CAC67870B8A65F87B85C67EBD0____5B27119296BBAF6043E71986738141D2CB5ECE10B50B1C353BBF25DBF658195C_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_4, L_5, NULL);
		(&V_0)->___TypesData = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___TypesData), (void*)L_4);
		(&V_0)->___TotalFiles = ((int32_t)10);
		(&V_0)->___TotalTypes = ((int32_t)11);
		(&V_0)->___IsEditorOnly = (bool)0;
		MonoScriptData_tA2A0A26732AD400024940028C971A8CF630941AB L_6 = V_0;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnitySourceGeneratedAssemblyMonoScriptTypes_v1__ctor_mFE3AA8C2F525BD3EE6D64DAD60511894727F5113 (UnitySourceGeneratedAssemblyMonoScriptTypes_v1_t769BC63034F422B624EDC6CB8574DB6D6E303398* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C void MonoScriptData_tA2A0A26732AD400024940028C971A8CF630941AB_marshal_pinvoke(const MonoScriptData_tA2A0A26732AD400024940028C971A8CF630941AB& unmarshaled, MonoScriptData_tA2A0A26732AD400024940028C971A8CF630941AB_marshaled_pinvoke& marshaled)
{
	marshaled.___FilePathsData = il2cpp_codegen_com_marshal_safe_array(IL2CPP_VT_I1, unmarshaled.___FilePathsData);
	marshaled.___TypesData = il2cpp_codegen_com_marshal_safe_array(IL2CPP_VT_I1, unmarshaled.___TypesData);
	marshaled.___TotalTypes = unmarshaled.___TotalTypes;
	marshaled.___TotalFiles = unmarshaled.___TotalFiles;
	marshaled.___IsEditorOnly = static_cast<int32_t>(unmarshaled.___IsEditorOnly);
}
IL2CPP_EXTERN_C void MonoScriptData_tA2A0A26732AD400024940028C971A8CF630941AB_marshal_pinvoke_back(const MonoScriptData_tA2A0A26732AD400024940028C971A8CF630941AB_marshaled_pinvoke& marshaled, MonoScriptData_tA2A0A26732AD400024940028C971A8CF630941AB& unmarshaled)
{
	unmarshaled.___FilePathsData = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, il2cpp_defaults.byte_class, marshaled.___FilePathsData);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___FilePathsData), (void*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, il2cpp_defaults.byte_class, marshaled.___FilePathsData));
	unmarshaled.___TypesData = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, il2cpp_defaults.byte_class, marshaled.___TypesData);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___TypesData), (void*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, il2cpp_defaults.byte_class, marshaled.___TypesData));
	int32_t unmarshaledTotalTypes_temp_2 = 0;
	unmarshaledTotalTypes_temp_2 = marshaled.___TotalTypes;
	unmarshaled.___TotalTypes = unmarshaledTotalTypes_temp_2;
	int32_t unmarshaledTotalFiles_temp_3 = 0;
	unmarshaledTotalFiles_temp_3 = marshaled.___TotalFiles;
	unmarshaled.___TotalFiles = unmarshaledTotalFiles_temp_3;
	bool unmarshaledIsEditorOnly_temp_4 = false;
	unmarshaledIsEditorOnly_temp_4 = static_cast<bool>(marshaled.___IsEditorOnly);
	unmarshaled.___IsEditorOnly = unmarshaledIsEditorOnly_temp_4;
}
IL2CPP_EXTERN_C void MonoScriptData_tA2A0A26732AD400024940028C971A8CF630941AB_marshal_pinvoke_cleanup(MonoScriptData_tA2A0A26732AD400024940028C971A8CF630941AB_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_com_destroy_safe_array(marshaled.___FilePathsData);
	marshaled.___FilePathsData = NULL;
	il2cpp_codegen_com_destroy_safe_array(marshaled.___TypesData);
	marshaled.___TypesData = NULL;
}
IL2CPP_EXTERN_C void MonoScriptData_tA2A0A26732AD400024940028C971A8CF630941AB_marshal_com(const MonoScriptData_tA2A0A26732AD400024940028C971A8CF630941AB& unmarshaled, MonoScriptData_tA2A0A26732AD400024940028C971A8CF630941AB_marshaled_com& marshaled)
{
	marshaled.___FilePathsData = il2cpp_codegen_com_marshal_safe_array(IL2CPP_VT_I1, unmarshaled.___FilePathsData);
	marshaled.___TypesData = il2cpp_codegen_com_marshal_safe_array(IL2CPP_VT_I1, unmarshaled.___TypesData);
	marshaled.___TotalTypes = unmarshaled.___TotalTypes;
	marshaled.___TotalFiles = unmarshaled.___TotalFiles;
	marshaled.___IsEditorOnly = static_cast<int32_t>(unmarshaled.___IsEditorOnly);
}
IL2CPP_EXTERN_C void MonoScriptData_tA2A0A26732AD400024940028C971A8CF630941AB_marshal_com_back(const MonoScriptData_tA2A0A26732AD400024940028C971A8CF630941AB_marshaled_com& marshaled, MonoScriptData_tA2A0A26732AD400024940028C971A8CF630941AB& unmarshaled)
{
	unmarshaled.___FilePathsData = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, il2cpp_defaults.byte_class, marshaled.___FilePathsData);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___FilePathsData), (void*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, il2cpp_defaults.byte_class, marshaled.___FilePathsData));
	unmarshaled.___TypesData = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, il2cpp_defaults.byte_class, marshaled.___TypesData);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___TypesData), (void*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, il2cpp_defaults.byte_class, marshaled.___TypesData));
	int32_t unmarshaledTotalTypes_temp_2 = 0;
	unmarshaledTotalTypes_temp_2 = marshaled.___TotalTypes;
	unmarshaled.___TotalTypes = unmarshaledTotalTypes_temp_2;
	int32_t unmarshaledTotalFiles_temp_3 = 0;
	unmarshaledTotalFiles_temp_3 = marshaled.___TotalFiles;
	unmarshaled.___TotalFiles = unmarshaledTotalFiles_temp_3;
	bool unmarshaledIsEditorOnly_temp_4 = false;
	unmarshaledIsEditorOnly_temp_4 = static_cast<bool>(marshaled.___IsEditorOnly);
	unmarshaled.___IsEditorOnly = unmarshaledIsEditorOnly_temp_4;
}
IL2CPP_EXTERN_C void MonoScriptData_tA2A0A26732AD400024940028C971A8CF630941AB_marshal_com_cleanup(MonoScriptData_tA2A0A26732AD400024940028C971A8CF630941AB_marshaled_com& marshaled)
{
	il2cpp_codegen_com_destroy_safe_array(marshaled.___FilePathsData);
	marshaled.___FilePathsData = NULL;
	il2cpp_codegen_com_destroy_safe_array(marshaled.___TypesData);
	marshaled.___TypesData = NULL;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CoreExtensions_SetRandomSign_m4695C5EE7055C5339806520AD56CEBBF499965CB (int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		float L_1;
		L_1 = Random_get_value_m2CEA87FADF5222EF9E13D32695F15E2BA282E24B(NULL);
		if ((((float)((float)il2cpp_codegen_multiply(((float)L_0), L_1))) < ((float)(0.5f))))
		{
			goto IL_0011;
		}
	}
	{
		return (-1);
	}

IL_0011:
	{
		return 1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CoreExtensions_SetRandomSign_m6BF251619A967612CF95D5CCEB808C0C72634C5F (float ___0_value, const RuntimeMethod* method) 
{
	int32_t G_B3_0 = 0;
	{
		float L_0 = ___0_value;
		float L_1;
		L_1 = Random_get_value_m2CEA87FADF5222EF9E13D32695F15E2BA282E24B(NULL);
		if ((((float)((float)il2cpp_codegen_multiply(L_0, L_1))) < ((float)(0.5f))))
		{
			goto IL_0011;
		}
	}
	{
		G_B3_0 = (-1);
		goto IL_0012;
	}

IL_0011:
	{
		G_B3_0 = 1;
	}

IL_0012:
	{
		return ((float)G_B3_0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double CoreExtensions_SetRandomSign_m81BCB6EAC9826E7BC80ABE7D3BB41C3B5D1B9FC0 (double ___0_value, const RuntimeMethod* method) 
{
	int32_t G_B3_0 = 0;
	{
		double L_0 = ___0_value;
		float L_1;
		L_1 = Random_get_value_m2CEA87FADF5222EF9E13D32695F15E2BA282E24B(NULL);
		if ((((double)((double)il2cpp_codegen_multiply(L_0, ((double)L_1)))) < ((double)(0.5))))
		{
			goto IL_0016;
		}
	}
	{
		G_B3_0 = (-1);
		goto IL_0017;
	}

IL_0016:
	{
		G_B3_0 = 1;
	}

IL_0017:
	{
		return ((double)G_B3_0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CoreExtensions_AddSpaces_m9B6DCDE78B339BBD0E195DC8CE065B8AFFB5D98A (String_t* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Regex_tE773142C2BE45C5D362B0F815AFF831707A51772_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral94D92116D5FEFD4DDDBAE49BEC55B18F8EFE8B25);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBF54BCA5EFFA7D5270F422DDA0C936A0C3ED83CF);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___0_value;
		il2cpp_codegen_runtime_class_init_inline(Regex_tE773142C2BE45C5D362B0F815AFF831707A51772_il2cpp_TypeInfo_var);
		String_t* L_1;
		L_1 = Regex_Replace_m811FCA60D20059998EC547FC390F053C524D045D(L_0, _stringLiteralBF54BCA5EFFA7D5270F422DDA0C936A0C3ED83CF, _stringLiteral94D92116D5FEFD4DDDBAE49BEC55B18F8EFE8B25, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CoreExtensions_FindStringInsideBrackets_m3A2C25AD258542A0F4B0A1AEB155B143AB2D6700 (String_t* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Regex_tE773142C2BE45C5D362B0F815AFF831707A51772_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral041AB57A6C173676A6BE0427A74832D5AE0E8D12);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1925FA5108B30F8BDA1B28AF1A9E45B8685C7BE4);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___0_value;
		il2cpp_codegen_runtime_class_init_inline(Regex_tE773142C2BE45C5D362B0F815AFF831707A51772_il2cpp_TypeInfo_var);
		Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F* L_1;
		L_1 = Regex_Match_mE3EC82B72BF82AA4B8749251C12C383047531972(L_0, _stringLiteral1925FA5108B30F8BDA1B28AF1A9E45B8685C7BE4, NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = VirtualFuncInvoker1< String_t*, String_t* >::Invoke(5, L_1, _stringLiteral041AB57A6C173676A6BE0427A74832D5AE0E8D12);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CoreExtensions_FlipX_m355F8370D82FB8DEF00A8848CA7C2239163DCDF0 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_transform, bool ___1_flip, const RuntimeMethod* method) 
{
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* G_B2_0 = NULL;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* G_B1_0 = NULL;
	float G_B3_0 = 0.0f;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* G_B3_1 = NULL;
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = ___0_transform;
		bool L_1 = ___1_flip;
		if (L_1)
		{
			G_B2_0 = L_0;
			goto IL_0016;
		}
		G_B1_0 = L_0;
	}
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = ___0_transform;
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_2, NULL);
		float L_4 = L_3.___x;
		float L_5;
		L_5 = fabsf(L_4);
		G_B3_0 = L_5;
		G_B3_1 = G_B1_0;
		goto IL_0027;
	}

IL_0016:
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6 = ___0_transform;
		NullCheck(L_6);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_6, NULL);
		float L_8 = L_7.___x;
		float L_9;
		L_9 = fabsf(L_8);
		G_B3_0 = ((-L_9));
		G_B3_1 = G_B2_0;
	}

IL_0027:
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10 = ___0_transform;
		NullCheck(L_10);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_10, NULL);
		float L_12 = L_11.___y;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13 = ___0_transform;
		NullCheck(L_13);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_13, NULL);
		float L_15 = L_14.___z;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		memset((&L_16), 0, sizeof(L_16));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_16), G_B3_0, L_12, L_15, NULL);
		NullCheck(G_B3_1);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(G_B3_1, L_16, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CoreExtensions_FlipY_mDEE6E9E11E7DDC363608E1BAA593D4B03236AB30 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_transform, bool ___1_flip, const RuntimeMethod* method) 
{
	float G_B2_0 = 0.0f;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* G_B2_1 = NULL;
	float G_B1_0 = 0.0f;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* G_B1_1 = NULL;
	float G_B3_0 = 0.0f;
	float G_B3_1 = 0.0f;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* G_B3_2 = NULL;
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = ___0_transform;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1 = ___0_transform;
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_1, NULL);
		float L_3 = L_2.___x;
		bool L_4 = ___1_flip;
		if (L_4)
		{
			G_B2_0 = L_3;
			G_B2_1 = L_0;
			goto IL_0021;
		}
		G_B1_0 = L_3;
		G_B1_1 = L_0;
	}
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5 = ___0_transform;
		NullCheck(L_5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_5, NULL);
		float L_7 = L_6.___y;
		float L_8;
		L_8 = fabsf(L_7);
		G_B3_0 = L_8;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		goto IL_0032;
	}

IL_0021:
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9 = ___0_transform;
		NullCheck(L_9);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_9, NULL);
		float L_11 = L_10.___y;
		float L_12;
		L_12 = fabsf(L_11);
		G_B3_0 = ((-L_12));
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
	}

IL_0032:
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13 = ___0_transform;
		NullCheck(L_13);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_13, NULL);
		float L_15 = L_14.___z;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		memset((&L_16), 0, sizeof(L_16));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_16), G_B3_1, G_B3_0, L_15, NULL);
		NullCheck(G_B3_2);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(G_B3_2, L_16, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* CoreExtensions_TryGetChild_mEDA8826390637EC367675766FE8D13D689D8374F (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_transform, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = ___0_transform;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = Transform_get_childCount_mE9C29C702AB662CC540CA053EDE48BDAFA35B4B0(L_0, NULL);
		int32_t L_2 = ___1_index;
		if ((((int32_t)L_1) >= ((int32_t)L_2)))
		{
			goto IL_0011;
		}
	}
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3 = ___0_transform;
		int32_t L_4 = ___1_index;
		NullCheck(L_3);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_3, L_4, NULL);
		return L_5;
	}

IL_0011:
	{
		return (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)NULL;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* CoreExtensions_ResetLocal_m96DB1813180AAF080B57352A61F17D41C718B3BA (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_transform, const RuntimeMethod* method) 
{
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = ___0_transform;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2;
		L_2 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		NullCheck(L_0);
		Transform_SetLocalPositionAndRotation_m0FB0FCF462AB7CD21880042918BCC372A59E734D(L_0, L_1, L_2, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3 = ___0_transform;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline(NULL);
		NullCheck(L_3);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_3, L_4, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5 = ___0_transform;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* CoreExtensions_ResetGlobal_mB2381AEC863BB3950BEBCD26B8D12A5E06FE8F83 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_transform, const RuntimeMethod* method) 
{
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = ___0_transform;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2;
		L_2 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		NullCheck(L_0);
		Transform_SetPositionAndRotation_m418859BF59086EEAA084FFD6F258A43FAB408F5A(L_0, L_1, L_2, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3 = ___0_transform;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline(NULL);
		NullCheck(L_3);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_3, L_4, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5 = ___0_transform;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* CoreExtensions_SetPositionX_mC924A83442AB9AC4EBC50BC46387CC28CB8210B5 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_transform, float ___1_x, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = ___0_transform;
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_0, NULL);
		V_0 = L_1;
		float L_2 = ___1_x;
		(&V_0)->___x = L_2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3 = ___0_transform;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = V_0;
		NullCheck(L_3);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_3, L_4, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5 = ___0_transform;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* CoreExtensions_SetPositionY_m3DC197DBE5DDB14F69CFCB1B1638E666916F9DBE (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_transform, float ___1_y, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = ___0_transform;
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_0, NULL);
		V_0 = L_1;
		float L_2 = ___1_y;
		(&V_0)->___y = L_2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3 = ___0_transform;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = V_0;
		NullCheck(L_3);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_3, L_4, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5 = ___0_transform;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* CoreExtensions_SetPositionZ_mCD84FAD5644B53A65A74FCD6655BFEEF8BD55885 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_transform, float ___1_z, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = ___0_transform;
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_0, NULL);
		V_0 = L_1;
		float L_2 = ___1_z;
		(&V_0)->___z = L_2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3 = ___0_transform;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = V_0;
		NullCheck(L_3);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_3, L_4, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5 = ___0_transform;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CoreExtensions_SetWidth_mCD03CD2CC843B2E3A5C3D1A2DCF5762871E80545 (Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___0_graphic, float ___1_width, const RuntimeMethod* method) 
{
	{
		Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* L_0 = ___0_graphic;
		NullCheck(L_0);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_1;
		L_1 = Graphic_get_rectTransform_mF4752E8934267D630810E84CE02CDFB81EB1FD6D(L_0, NULL);
		Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* L_2 = ___0_graphic;
		NullCheck(L_2);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_3;
		L_3 = Graphic_get_rectTransform_mF4752E8934267D630810E84CE02CDFB81EB1FD6D(L_2, NULL);
		NullCheck(L_3);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		L_4 = RectTransform_get_sizeDelta_m822A8493F2035677384F1540A2E9E5ACE63010BB(L_3, NULL);
		float L_5 = ___1_width;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		L_6 = CoreExtensions_SetX_mDA0794628479534B9EE9E676DB38FE0C33DD5FA3(L_4, L_5, NULL);
		NullCheck(L_1);
		RectTransform_set_sizeDelta_mC9A980EA6036E6725EF24CEDF3EE80A9B2B50EE5(L_1, L_6, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CoreExtensions_GetWidth_mF4CC3A02F915EA7A46EFD974DBD77E27A901403E (Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___0_graphic, const RuntimeMethod* method) 
{
	{
		Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* L_0 = ___0_graphic;
		NullCheck(L_0);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_1;
		L_1 = Graphic_get_rectTransform_mF4752E8934267D630810E84CE02CDFB81EB1FD6D(L_0, NULL);
		float L_2;
		L_2 = CoreExtensions_GetWidth_m55E3784EB53BE0192B5EAF5A044F986B37743B40_inline(L_1, NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CoreExtensions_GetWidth_m55E3784EB53BE0192B5EAF5A044F986B37743B40 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___0_rect, const RuntimeMethod* method) 
{
	{
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_0 = ___0_rect;
		NullCheck(L_0);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1;
		L_1 = RectTransform_get_sizeDelta_m822A8493F2035677384F1540A2E9E5ACE63010BB(L_0, NULL);
		float L_2 = L_1.___x;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* CoreExtensions_SetAnchoredPositionX_m93B59D08BE359D0DBB00D76DBAC037194F805380 (Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___0_graphic, float ___1_x, const RuntimeMethod* method) 
{
	{
		Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* L_0 = ___0_graphic;
		NullCheck(L_0);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_1;
		L_1 = Graphic_get_rectTransform_mF4752E8934267D630810E84CE02CDFB81EB1FD6D(L_0, NULL);
		float L_2 = ___1_x;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_3;
		L_3 = CoreExtensions_SetAnchoredPositionX_m97F2E12AA08861E704EE2C935535D4331694549C_inline(L_1, L_2, NULL);
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* CoreExtensions_SetAnchoredPositionY_m021C24388A1AC370F076E31880BD2C28239E800B (Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___0_graphic, float ___1_y, const RuntimeMethod* method) 
{
	{
		Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* L_0 = ___0_graphic;
		NullCheck(L_0);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_1;
		L_1 = Graphic_get_rectTransform_mF4752E8934267D630810E84CE02CDFB81EB1FD6D(L_0, NULL);
		float L_2 = ___1_y;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_3;
		L_3 = CoreExtensions_SetAnchoredPositionY_mE704B5BD23B79CD653E3B4986B08C0B4017F78F7_inline(L_1, L_2, NULL);
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* CoreExtensions_SetAnchoredPositionX_m97F2E12AA08861E704EE2C935535D4331694549C (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___0_rectTransform, float ___1_x, const RuntimeMethod* method) 
{
	{
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_0 = ___0_rectTransform;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_1 = ___0_rectTransform;
		NullCheck(L_1);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		L_2 = RectTransform_get_anchoredPosition_m38F25A4253B0905BB058BE73DBF43C7172CE0680(L_1, NULL);
		float L_3 = ___1_x;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		L_4 = CoreExtensions_SetX_mDA0794628479534B9EE9E676DB38FE0C33DD5FA3(L_2, L_3, NULL);
		NullCheck(L_0);
		RectTransform_set_anchoredPosition_mF903ACE04F6959B1CD67E2B94FABC0263068F965(L_0, L_4, NULL);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_5 = ___0_rectTransform;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* CoreExtensions_SetAnchoredPositionY_mE704B5BD23B79CD653E3B4986B08C0B4017F78F7 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___0_rectTransform, float ___1_y, const RuntimeMethod* method) 
{
	{
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_0 = ___0_rectTransform;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_1 = ___0_rectTransform;
		NullCheck(L_1);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		L_2 = RectTransform_get_anchoredPosition_m38F25A4253B0905BB058BE73DBF43C7172CE0680(L_1, NULL);
		float L_3 = ___1_y;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		L_4 = CoreExtensions_SetY_mFDB1C9FA6F98B610A0B74513944A019EC9A69F0F(L_2, L_3, NULL);
		NullCheck(L_0);
		RectTransform_set_anchoredPosition_mF903ACE04F6959B1CD67E2B94FABC0263068F965(L_0, L_4, NULL);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_5 = ___0_rectTransform;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CoreExtensions_GetAnchoredPositionX_mDD74C6A34275CF6E1AF1D33A6B2F4B3E6A3610FA (Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___0_graphic, const RuntimeMethod* method) 
{
	{
		Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* L_0 = ___0_graphic;
		NullCheck(L_0);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_1;
		L_1 = Graphic_get_rectTransform_mF4752E8934267D630810E84CE02CDFB81EB1FD6D(L_0, NULL);
		NullCheck(L_1);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		L_2 = RectTransform_get_anchoredPosition_m38F25A4253B0905BB058BE73DBF43C7172CE0680(L_1, NULL);
		float L_3 = L_2.___x;
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 CoreExtensions_AddFloat_m959FACFE34ADAF1918020468FF8ABC06A3FDB73F (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_vector, float ___1_floatValue, const RuntimeMethod* method) 
{
	{
		float* L_0 = (float*)(&(&___0_vector)->___x);
		float* L_1 = L_0;
		float L_2 = *((float*)L_1);
		float L_3 = ___1_floatValue;
		*((float*)L_1) = (float)((float)il2cpp_codegen_add(L_2, L_3));
		float* L_4 = (float*)(&(&___0_vector)->___y);
		float* L_5 = L_4;
		float L_6 = *((float*)L_5);
		float L_7 = ___1_floatValue;
		*((float*)L_5) = (float)((float)il2cpp_codegen_add(L_6, L_7));
		float* L_8 = (float*)(&(&___0_vector)->___z);
		float* L_9 = L_8;
		float L_10 = *((float*)L_9);
		float L_11 = ___1_floatValue;
		*((float*)L_9) = (float)((float)il2cpp_codegen_add(L_10, L_11));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12 = ___0_vector;
		return L_12;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 CoreExtensions_AddToX_mD4238DCEB9D3E292B0469CA61678B65BA3FF439D (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_vector, float ___1_value, const RuntimeMethod* method) 
{
	{
		float* L_0 = (float*)(&(&___0_vector)->___x);
		float* L_1 = L_0;
		float L_2 = *((float*)L_1);
		float L_3 = ___1_value;
		*((float*)L_1) = (float)((float)il2cpp_codegen_add(L_2, L_3));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_vector;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 CoreExtensions_AddToY_mCDA7A10705D7AE81C1B91F3664F9248803942FBF (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_vector, float ___1_value, const RuntimeMethod* method) 
{
	{
		float* L_0 = (float*)(&(&___0_vector)->___y);
		float* L_1 = L_0;
		float L_2 = *((float*)L_1);
		float L_3 = ___1_value;
		*((float*)L_1) = (float)((float)il2cpp_codegen_add(L_2, L_3));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_vector;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 CoreExtensions_AddToZ_m2712D948D431F6ED1F7EE945628F899386A50759 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_vector, float ___1_value, const RuntimeMethod* method) 
{
	{
		float* L_0 = (float*)(&(&___0_vector)->___z);
		float* L_1 = L_0;
		float L_2 = *((float*)L_1);
		float L_3 = ___1_value;
		*((float*)L_1) = (float)((float)il2cpp_codegen_add(L_2, L_3));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_vector;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 CoreExtensions_MultX_mE86BBEAAF51D8D8E8D30E3A395AAF28D1EDA77F4 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_vector, float ___1_value, const RuntimeMethod* method) 
{
	{
		float* L_0 = (float*)(&(&___0_vector)->___x);
		float* L_1 = L_0;
		float L_2 = *((float*)L_1);
		float L_3 = ___1_value;
		*((float*)L_1) = (float)((float)il2cpp_codegen_multiply(L_2, L_3));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_vector;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 CoreExtensions_MultY_mF18A975FEEDB0186E99BDB1DBB6D5792B89D768D (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_vector, float ___1_value, const RuntimeMethod* method) 
{
	{
		float* L_0 = (float*)(&(&___0_vector)->___y);
		float* L_1 = L_0;
		float L_2 = *((float*)L_1);
		float L_3 = ___1_value;
		*((float*)L_1) = (float)((float)il2cpp_codegen_multiply(L_2, L_3));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_vector;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 CoreExtensions_MultZ_mB66F812E4D6AADCEDD1E39F4BD5DFEE011ADD682 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_vector, float ___1_value, const RuntimeMethod* method) 
{
	{
		float* L_0 = (float*)(&(&___0_vector)->___z);
		float* L_1 = L_0;
		float L_2 = *((float*)L_1);
		float L_3 = ___1_value;
		*((float*)L_1) = (float)((float)il2cpp_codegen_multiply(L_2, L_3));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_vector;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 CoreExtensions_Divide_m243D6BADEB132A4EE9CE6E9077FE6E4B976BC4BC (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_vector, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_other, const RuntimeMethod* method) 
{
	{
		float* L_0 = (float*)(&(&___0_vector)->___x);
		float* L_1 = L_0;
		float L_2 = *((float*)L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___1_other;
		float L_4 = L_3.___x;
		*((float*)L_1) = (float)((float)(L_2/L_4));
		float* L_5 = (float*)(&(&___0_vector)->___y);
		float* L_6 = L_5;
		float L_7 = *((float*)L_6);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___1_other;
		float L_9 = L_8.___y;
		*((float*)L_6) = (float)((float)(L_7/L_9));
		float* L_10 = (float*)(&(&___0_vector)->___z);
		float* L_11 = L_10;
		float L_12 = *((float*)L_11);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = ___1_other;
		float L_14 = L_13.___z;
		*((float*)L_11) = (float)((float)(L_12/L_14));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15 = ___0_vector;
		return L_15;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 CoreExtensions_SetX_m03954A92A46FF52001773438B34891FFFD246F69 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_vector, float ___1_value, const RuntimeMethod* method) 
{
	{
		float L_0 = ___1_value;
		(&___0_vector)->___x = L_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___0_vector;
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 CoreExtensions_SetY_mAD1768992419E2D23A633FB5213E02DB54E23FCC (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_vector, float ___1_value, const RuntimeMethod* method) 
{
	{
		float L_0 = ___1_value;
		(&___0_vector)->___y = L_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___0_vector;
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 CoreExtensions_SetZ_m5EB392DDB2F36890BF3B1849BF3BF410AAE70CB3 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_vector, float ___1_value, const RuntimeMethod* method) 
{
	{
		float L_0 = ___1_value;
		(&___0_vector)->___z = L_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___0_vector;
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 CoreExtensions_SetAll_m5A92565DB35360F9CADF7C84C88EA22DAA97974F (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_vector, float ___1_valueOfXYZ, const RuntimeMethod* method) 
{
	{
		float L_0 = ___1_valueOfXYZ;
		(&___0_vector)->___x = L_0;
		float L_1 = ___1_valueOfXYZ;
		(&___0_vector)->___y = L_1;
		float L_2 = ___1_valueOfXYZ;
		(&___0_vector)->___z = L_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___0_vector;
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 CoreExtensions_ToVector3_m82901B107CEF17AFD847D7618FEC3DD111D535C1 (float ___0_value, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_value;
		float L_1 = ___0_value;
		float L_2 = ___0_value;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		memset((&L_3), 0, sizeof(L_3));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_3), L_0, L_1, L_2, NULL);
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 CoreExtensions_ToVector3_m6488F01BC495FC1D1AF3B251D5878BD349AD2E46 (int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		int32_t L_1 = ___0_value;
		int32_t L_2 = ___0_value;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		memset((&L_3), 0, sizeof(L_3));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_3), ((float)L_0), ((float)L_1), ((float)L_2), NULL);
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 CoreExtensions_ToWorldPosition_mC71E45E95FC6F8BD98BE49F58CA767DC7F91015B (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_vector, float ___1_z, const RuntimeMethod* method) 
{
	{
		float L_0 = ___1_z;
		(&___0_vector)->___z = L_0;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_1;
		L_1 = Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___0_vector;
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Camera_ScreenToWorldPoint_m5EA3148F070985EC72127AAC3448D8D6ABE6E7E5(L_1, L_2, NULL);
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 CoreExtensions_GetRandomPositionAroundObject_mC6DD63271F9C0B4295B4ACA10AB08FF5565BA070 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_position, float ___1_minRadius, float ___2_maxRadius, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	{
		float L_0 = ___1_minRadius;
		float L_1 = ___2_maxRadius;
		float L_2;
		L_2 = Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494(L_0, L_1, NULL);
		int32_t L_3;
		L_3 = Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68(0, ((int32_t)360), NULL);
		V_0 = ((float)L_3);
		float L_4 = L_2;
		float L_5 = V_0;
		float L_6;
		L_6 = cosf(L_5);
		V_1 = ((float)il2cpp_codegen_multiply(L_4, L_6));
		float L_7 = V_0;
		float L_8;
		L_8 = sinf(L_7);
		V_2 = ((float)il2cpp_codegen_multiply(L_4, L_8));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = ___0_position;
		float L_10 = L_9.___x;
		float L_11 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12 = ___0_position;
		float L_13 = L_12.___y;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14 = ___0_position;
		float L_15 = L_14.___z;
		float L_16 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		memset((&L_17), 0, sizeof(L_17));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_17), ((float)il2cpp_codegen_add(L_10, L_11)), L_13, ((float)il2cpp_codegen_add(L_15, L_16)), NULL);
		return L_17;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 CoreExtensions_GetRandomPositionAroundObject_m35707D96DF0DA4AAE11A81EF4DD202083AD27591 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_position, float ___1_radius, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	{
		int32_t L_0;
		L_0 = Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68(0, ((int32_t)360), NULL);
		V_0 = ((float)L_0);
		float L_1 = ___1_radius;
		float L_2 = V_0;
		float L_3;
		L_3 = cosf(L_2);
		V_1 = ((float)il2cpp_codegen_multiply(L_1, L_3));
		float L_4 = ___1_radius;
		float L_5 = V_0;
		float L_6;
		L_6 = sinf(L_5);
		V_2 = ((float)il2cpp_codegen_multiply(L_4, L_6));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = ___0_position;
		float L_8 = L_7.___x;
		float L_9 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___0_position;
		float L_11 = L_10.___y;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12 = ___0_position;
		float L_13 = L_12.___z;
		float L_14 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		memset((&L_15), 0, sizeof(L_15));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_15), ((float)il2cpp_codegen_add(L_8, L_9)), L_11, ((float)il2cpp_codegen_add(L_13, L_14)), NULL);
		return L_15;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 CoreExtensions_GetRandomPosition_m4DBA57CEE7E6F4AA5CBDEF53A67335C9347DD2B4 (Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 ___0_bounds, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Bounds_get_size_m0699A53A55A78B3201D7270D6F338DFA91B6FAD4_inline((&___0_bounds), NULL);
		float L_1 = L_0.___x;
		V_0 = ((float)(L_1/(2.0f)));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Bounds_get_size_m0699A53A55A78B3201D7270D6F338DFA91B6FAD4_inline((&___0_bounds), NULL);
		float L_3 = L_2.___y;
		V_1 = ((float)(L_3/(2.0f)));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Bounds_get_size_m0699A53A55A78B3201D7270D6F338DFA91B6FAD4_inline((&___0_bounds), NULL);
		float L_5 = L_4.___z;
		V_2 = ((float)(L_5/(2.0f)));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Bounds_get_center_m5B05F81CB835EB6DD8628FDA24B638F477984DC3_inline((&___0_bounds), NULL);
		float L_7 = V_0;
		float L_8 = V_0;
		float L_9;
		L_9 = Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494(((-L_7)), L_8, NULL);
		float L_10 = V_1;
		float L_11 = V_1;
		float L_12;
		L_12 = Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494(((-L_10)), L_11, NULL);
		float L_13 = V_2;
		float L_14 = V_2;
		float L_15;
		L_15 = Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494(((-L_13)), L_14, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		memset((&L_16), 0, sizeof(L_16));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_16), L_9, L_12, L_15, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_6, L_16, NULL);
		return L_17;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 CoreExtensions_GetRandomPosition_m7AB83C45ECAE9FBBF92F022084C8BEDCB6523570 (Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 ___0_bounds, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___1_rotation, float ___2_offset, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Bounds_get_size_m0699A53A55A78B3201D7270D6F338DFA91B6FAD4_inline((&___0_bounds), NULL);
		float L_1 = L_0.___x;
		float L_2 = ___2_offset;
		V_0 = ((float)il2cpp_codegen_add(((float)(L_1/(2.0f))), L_2));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Bounds_get_size_m0699A53A55A78B3201D7270D6F338DFA91B6FAD4_inline((&___0_bounds), NULL);
		float L_4 = L_3.___y;
		float L_5 = ___2_offset;
		V_1 = ((float)il2cpp_codegen_add(((float)(L_4/(2.0f))), L_5));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Bounds_get_size_m0699A53A55A78B3201D7270D6F338DFA91B6FAD4_inline((&___0_bounds), NULL);
		float L_7 = L_6.___z;
		float L_8 = ___2_offset;
		V_2 = ((float)il2cpp_codegen_add(((float)(L_7/(2.0f))), L_8));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Bounds_get_center_m5B05F81CB835EB6DD8628FDA24B638F477984DC3_inline((&___0_bounds), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_10 = ___1_rotation;
		float L_11 = V_0;
		float L_12 = V_0;
		float L_13;
		L_13 = Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494(((-L_11)), L_12, NULL);
		float L_14 = V_1;
		float L_15 = V_1;
		float L_16;
		L_16 = Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494(((-L_14)), L_15, NULL);
		float L_17 = V_2;
		float L_18 = V_2;
		float L_19;
		L_19 = Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494(((-L_17)), L_18, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
		memset((&L_20), 0, sizeof(L_20));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_20), L_13, L_16, L_19, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21;
		L_21 = Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C(L_10, L_20, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22;
		L_22 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_9, L_21, NULL);
		return L_22;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 CoreExtensions_Mult_mDCEE25CBEF9C9195BAB2B5D566B29DB2C1491C82 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_vector, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_value, const RuntimeMethod* method) 
{
	{
		float* L_0 = (float*)(&(&___0_vector)->___x);
		float* L_1 = L_0;
		float L_2 = *((float*)L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___1_value;
		float L_4 = L_3.___x;
		*((float*)L_1) = (float)((float)il2cpp_codegen_multiply(L_2, L_4));
		float* L_5 = (float*)(&(&___0_vector)->___y);
		float* L_6 = L_5;
		float L_7 = *((float*)L_6);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___1_value;
		float L_9 = L_8.___y;
		*((float*)L_6) = (float)((float)il2cpp_codegen_multiply(L_7, L_9));
		float* L_10 = (float*)(&(&___0_vector)->___z);
		float* L_11 = L_10;
		float L_12 = *((float*)L_11);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = ___1_value;
		float L_14 = L_13.___z;
		*((float*)L_11) = (float)((float)il2cpp_codegen_multiply(L_12, L_14));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15 = ___0_vector;
		return L_15;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 CoreExtensions_xz_mC839A818836118E777099E7B593EEC4CB60358EE (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) 
{
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_value;
		float L_1 = L_0.___x;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___0_value;
		float L_3 = L_2.___z;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_4), L_1, L_3, NULL);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 CoreExtensions_xy_m92737F5CE136EE47C5BD6A3ABB0FBCB4583FAB72 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) 
{
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_value;
		float L_1 = L_0.___x;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___0_value;
		float L_3 = L_2.___y;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_4), L_1, L_3, NULL);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 CoreExtensions_xyz_mE2CA59142A8C04E522EE12433E0542066E219656 (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___0_value, const RuntimeMethod* method) 
{
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_0 = ___0_value;
		float L_1 = L_0.___x;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_2 = ___0_value;
		float L_3 = L_2.___y;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_4 = ___0_value;
		float L_5 = L_4.___z;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_6), L_1, L_3, L_5, NULL);
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 CoreExtensions_xy_m3F46E70A166DB75954FA4A20BB916806553CAE70 (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___0_value, const RuntimeMethod* method) 
{
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_0 = ___0_value;
		float L_1 = L_0.___x;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_2 = ___0_value;
		float L_3 = L_2.___y;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_4), L_1, L_3, NULL);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 CoreExtensions_AddFloat_m0FBF56A5ECE1A20042AE7387F6D8F46645048134 (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_vector, float ___1_floatValue, const RuntimeMethod* method) 
{
	{
		float* L_0 = (float*)(&(&___0_vector)->___x);
		float* L_1 = L_0;
		float L_2 = *((float*)L_1);
		float L_3 = ___1_floatValue;
		*((float*)L_1) = (float)((float)il2cpp_codegen_add(L_2, L_3));
		float* L_4 = (float*)(&(&___0_vector)->___y);
		float* L_5 = L_4;
		float L_6 = *((float*)L_5);
		float L_7 = ___1_floatValue;
		*((float*)L_5) = (float)((float)il2cpp_codegen_add(L_6, L_7));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8 = ___0_vector;
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 CoreExtensions_AddToX_mA185954ABF447549AF138CAA78F1D3A501E82F05 (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_vector, float ___1_value, const RuntimeMethod* method) 
{
	{
		float* L_0 = (float*)(&(&___0_vector)->___x);
		float* L_1 = L_0;
		float L_2 = *((float*)L_1);
		float L_3 = ___1_value;
		*((float*)L_1) = (float)((float)il2cpp_codegen_add(L_2, L_3));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___0_vector;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 CoreExtensions_AddToY_mFB80ECF9085DE7260F82A3893CC34EAF1CFFD353 (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_vector, float ___1_value, const RuntimeMethod* method) 
{
	{
		float* L_0 = (float*)(&(&___0_vector)->___y);
		float* L_1 = L_0;
		float L_2 = *((float*)L_1);
		float L_3 = ___1_value;
		*((float*)L_1) = (float)((float)il2cpp_codegen_add(L_2, L_3));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___0_vector;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 CoreExtensions_MultX_mEE17B59D43216205098E71605D3F5A35BF1BAADF (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_vector, float ___1_value, const RuntimeMethod* method) 
{
	{
		float* L_0 = (float*)(&(&___0_vector)->___x);
		float* L_1 = L_0;
		float L_2 = *((float*)L_1);
		float L_3 = ___1_value;
		*((float*)L_1) = (float)((float)il2cpp_codegen_multiply(L_2, L_3));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___0_vector;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 CoreExtensions_MultY_m719438885EAD905A7A74FBD45BDAC5446BF1560B (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_vector, float ___1_value, const RuntimeMethod* method) 
{
	{
		float* L_0 = (float*)(&(&___0_vector)->___y);
		float* L_1 = L_0;
		float L_2 = *((float*)L_1);
		float L_3 = ___1_value;
		*((float*)L_1) = (float)((float)il2cpp_codegen_multiply(L_2, L_3));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___0_vector;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 CoreExtensions_SetX_mDA0794628479534B9EE9E676DB38FE0C33DD5FA3 (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_vector, float ___1_value, const RuntimeMethod* method) 
{
	{
		float L_0 = ___1_value;
		(&___0_vector)->___x = L_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = ___0_vector;
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 CoreExtensions_SetY_mFDB1C9FA6F98B610A0B74513944A019EC9A69F0F (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_vector, float ___1_value, const RuntimeMethod* method) 
{
	{
		float L_0 = ___1_value;
		(&___0_vector)->___y = L_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = ___0_vector;
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 CoreExtensions_ToVector2_mF77186A56FEF930D8C0AA787FFDDF4D5A6B2D0E6 (float ___0_value, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_value;
		float L_1 = ___0_value;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		memset((&L_2), 0, sizeof(L_2));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_2), L_0, L_1, NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 CoreExtensions_ToVector2_mE273E3255BC3186218EB1EB14003EF95A29298C2 (int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		int32_t L_1 = ___0_value;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		memset((&L_2), 0, sizeof(L_2));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_2), ((float)L_0), ((float)L_1), NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 CoreExtensions_ToVector3_m03B1E452BCC50C1E98DA1D28D4FBEF119A1F1B55 (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_vector, float ___1_z, const RuntimeMethod* method) 
{
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___0_vector;
		float L_1 = L_0.___x;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___0_vector;
		float L_3 = L_2.___y;
		float L_4 = ___1_z;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		memset((&L_5), 0, sizeof(L_5));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_5), L_1, L_3, L_4, NULL);
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A CoreExtensions_AddValue_m20F6461ADE511C8D1E01CEFD4B5A781D55BD2AAB (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___0_vector, int32_t ___1_value, const RuntimeMethod* method) 
{
	{
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* L_0 = (&___0_vector);
		int32_t L_1;
		L_1 = Vector2Int_get_x_mA2CACB1B6E6B5AD0CCC32B2CD2EDCE3ECEB50576_inline(L_0, NULL);
		int32_t L_2 = ___1_value;
		Vector2Int_set_x_m291ECF246536852F0B8EE049C4A3768E4999CDC8_inline(L_0, ((int32_t)il2cpp_codegen_add(L_1, L_2)), NULL);
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* L_3 = (&___0_vector);
		int32_t L_4;
		L_4 = Vector2Int_get_y_m48454163ECF0B463FB5A16A0C4FC4B14DB0768B3_inline(L_3, NULL);
		int32_t L_5 = ___1_value;
		Vector2Int_set_y_mF81881204EEE272BA409728C7EBFDE3A979DDF6A_inline(L_3, ((int32_t)il2cpp_codegen_add(L_4, L_5)), NULL);
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_6 = ___0_vector;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A CoreExtensions_AddToX_mF2EC412F292BDE296C67EF09E80322827B03F7F0 (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___0_vector, int32_t ___1_value, const RuntimeMethod* method) 
{
	{
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* L_0 = (&___0_vector);
		int32_t L_1;
		L_1 = Vector2Int_get_x_mA2CACB1B6E6B5AD0CCC32B2CD2EDCE3ECEB50576_inline(L_0, NULL);
		int32_t L_2 = ___1_value;
		Vector2Int_set_x_m291ECF246536852F0B8EE049C4A3768E4999CDC8_inline(L_0, ((int32_t)il2cpp_codegen_add(L_1, L_2)), NULL);
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_3 = ___0_vector;
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A CoreExtensions_AddToY_m6B6CC6C397E14D5615DDA8EE3320985D438A6F3B (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___0_vector, int32_t ___1_value, const RuntimeMethod* method) 
{
	{
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* L_0 = (&___0_vector);
		int32_t L_1;
		L_1 = Vector2Int_get_y_m48454163ECF0B463FB5A16A0C4FC4B14DB0768B3_inline(L_0, NULL);
		int32_t L_2 = ___1_value;
		Vector2Int_set_y_mF81881204EEE272BA409728C7EBFDE3A979DDF6A_inline(L_0, ((int32_t)il2cpp_codegen_add(L_1, L_2)), NULL);
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_3 = ___0_vector;
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A CoreExtensions_MultX_m0F60E9CB0CC43010EC979895F334C30DB0CF0200 (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___0_vector, int32_t ___1_value, const RuntimeMethod* method) 
{
	{
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* L_0 = (&___0_vector);
		int32_t L_1;
		L_1 = Vector2Int_get_x_mA2CACB1B6E6B5AD0CCC32B2CD2EDCE3ECEB50576_inline(L_0, NULL);
		int32_t L_2 = ___1_value;
		Vector2Int_set_x_m291ECF246536852F0B8EE049C4A3768E4999CDC8_inline(L_0, ((int32_t)il2cpp_codegen_multiply(L_1, L_2)), NULL);
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_3 = ___0_vector;
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A CoreExtensions_MultY_m454B76E0239F3619F619B69EC7DA1E59EE2EB012 (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___0_vector, int32_t ___1_value, const RuntimeMethod* method) 
{
	{
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* L_0 = (&___0_vector);
		int32_t L_1;
		L_1 = Vector2Int_get_y_m48454163ECF0B463FB5A16A0C4FC4B14DB0768B3_inline(L_0, NULL);
		int32_t L_2 = ___1_value;
		Vector2Int_set_y_mF81881204EEE272BA409728C7EBFDE3A979DDF6A_inline(L_0, ((int32_t)il2cpp_codegen_multiply(L_1, L_2)), NULL);
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_3 = ___0_vector;
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A CoreExtensions_SetX_m3AF5B27D4A495CCCFB8F9D0B7BB96E519435AC5A (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___0_vector, int32_t ___1_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___1_value;
		Vector2Int_set_x_m291ECF246536852F0B8EE049C4A3768E4999CDC8_inline((&___0_vector), L_0, NULL);
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_1 = ___0_vector;
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A CoreExtensions_SetY_mC57E376638A1137A8282913D35F73323EF804D35 (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___0_vector, int32_t ___1_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___1_value;
		Vector2Int_set_y_mF81881204EEE272BA409728C7EBFDE3A979DDF6A_inline((&___0_vector), L_0, NULL);
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_1 = ___0_vector;
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A CoreExtensions_ToVector2Int_mCB6FB78E4FBFDD256768A3A60ABEDF709138AB3B (int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		int32_t L_1 = ___0_value;
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_2;
		memset((&L_2), 0, sizeof(L_2));
		Vector2Int__ctor_mC20D1312133EB8CB63EC11067088B043660F11CE_inline((&L_2), L_0, L_1, NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 CoreExtensions_ToVector3_mB0C1C53C599F097A02C84CEBD7E585A11DB9C70C (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___0_vector, float ___1_z, const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = Vector2Int_get_x_mA2CACB1B6E6B5AD0CCC32B2CD2EDCE3ECEB50576_inline((&___0_vector), NULL);
		int32_t L_1;
		L_1 = Vector2Int_get_y_m48454163ECF0B463FB5A16A0C4FC4B14DB0768B3_inline((&___0_vector), NULL);
		float L_2 = ___1_z;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		memset((&L_3), 0, sizeof(L_3));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_3), ((float)L_0), ((float)L_1), L_2, NULL);
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F CoreExtensions_SetAlpha_m5F872B741E55B1B712518A25AE6EB3D4CB341570 (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_color, uint8_t ___1_aValue, const RuntimeMethod* method) 
{
	{
		uint8_t L_0 = ___1_aValue;
		(&___0_color)->___a = ((float)L_0);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = ___0_color;
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F CoreExtensions_SetAlpha_m21D482D1098D3FECE2BFEBA41F05B1BA23021FC0 (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_color, float ___1_aValue, const RuntimeMethod* method) 
{
	{
		float L_0 = ___1_aValue;
		(&___0_color)->___a = L_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = ___0_color;
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F CoreExtensions_SetAlpha_mA9DD49D9F8BB729B1913BD868F09BEB20D5FDD95 (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_color, int32_t ___1_aValue, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___1_aValue;
		(&___0_color)->___a = ((float)(((float)L_0)/(255.0f)));
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = ___0_color;
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CoreExtensions_ToHex_mCA7991DA7842DE3C0D194922D93EA5623ADECB8E (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_color, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral86953B386E543DC5AFB5CC6DFBD735EF7DAE369D);
		s_Il2CppMethodInitialized = true;
	}
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = ___0_color;
		float L_1 = L_0.___r;
		float L_2;
		L_2 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(L_1, NULL);
		uint8_t L_3 = ((uint8_t)il2cpp_codegen_cast_floating_point<uint8_t, int32_t, float>(((float)il2cpp_codegen_multiply(L_2, (255.0f)))));
		RuntimeObject* L_4 = Box(il2cpp_defaults.byte_class, &L_3);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_5 = ___0_color;
		float L_6 = L_5.___g;
		float L_7;
		L_7 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(L_6, NULL);
		uint8_t L_8 = ((uint8_t)il2cpp_codegen_cast_floating_point<uint8_t, int32_t, float>(((float)il2cpp_codegen_multiply(L_7, (255.0f)))));
		RuntimeObject* L_9 = Box(il2cpp_defaults.byte_class, &L_8);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_10 = ___0_color;
		float L_11 = L_10.___b;
		float L_12;
		L_12 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(L_11, NULL);
		uint8_t L_13 = ((uint8_t)il2cpp_codegen_cast_floating_point<uint8_t, int32_t, float>(((float)il2cpp_codegen_multiply(L_12, (255.0f)))));
		RuntimeObject* L_14 = Box(il2cpp_defaults.byte_class, &L_13);
		String_t* L_15;
		L_15 = String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C(_stringLiteral86953B386E543DC5AFB5CC6DFBD735EF7DAE369D, L_4, L_9, L_14, NULL);
		return L_15;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* CoreExtensions_SetAlpha_m101DD99D7CDC4E7E592A085A46F39A8F5FF1CB53 (Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___0_graphic, float ___1_a, const RuntimeMethod* method) 
{
	{
		Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* L_0 = ___0_graphic;
		Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* L_1 = ___0_graphic;
		NullCheck(L_1);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2;
		L_2 = VirtualFuncInvoker0< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(22, L_1);
		float L_3 = ___1_a;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4;
		L_4 = CoreExtensions_SetAlpha_m21D482D1098D3FECE2BFEBA41F05B1BA23021FC0(L_2, L_3, NULL);
		NullCheck(L_0);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23, L_0, L_4);
		Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* L_5 = ___0_graphic;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CoreExtensions_ObjectToString_m13B2E72EC4074C84E7EE3A274F242C340731B0A0 (RuntimeObject* ___0_parentObject, int32_t ___1_maxDepth, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral116273CD5D8FA85B2B09F79802D1EDD0C11FFC66);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3371C9C28E563AFD0A683CA126F078F3F07B7306);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7B0F74B596CC9D2DDF300DA4EFF02C6C830107ED);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8A8EFDA91C6C257127F8C8D526FAD7E7552766AA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral900D858FE9ABCD2ED2B25CD27110A78ADCC6EC6B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t* V_0 = NULL;
	String_t* V_1 = NULL;
	{
		RuntimeObject* L_0 = ___0_parentObject;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		return _stringLiteral900D858FE9ABCD2ED2B25CD27110A78ADCC6EC6B;
	}

IL_0009:
	{
		int32_t L_1 = ___1_maxDepth;
		int32_t L_2;
		L_2 = Mathf_Clamp_m4DC36EEFDBE5F07C16249DA568023C5ECCFF0E7B_inline(L_1, 1, ((int32_t)10), NULL);
		___1_maxDepth = L_2;
		StringBuilder_t* L_3 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_3, NULL);
		V_0 = L_3;
		StringBuilder_t* L_4 = V_0;
		RuntimeObject* L_5 = ___0_parentObject;
		NullCheck(L_5);
		String_t* L_6;
		L_6 = VirtualFuncInvoker0< String_t* >::Invoke(3, L_5);
		String_t* L_7;
		L_7 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteral116273CD5D8FA85B2B09F79802D1EDD0C11FFC66, L_6, _stringLiteral3371C9C28E563AFD0A683CA126F078F3F07B7306, NULL);
		NullCheck(L_4);
		StringBuilder_t* L_8;
		L_8 = StringBuilder_AppendLine_mF75744CE941C63E33188E22E936B71A24D3CBF88(L_4, L_7, NULL);
		StringBuilder_t* L_9 = V_0;
		NullCheck(L_9);
		StringBuilder_t* L_10;
		L_10 = StringBuilder_AppendLine_mF75744CE941C63E33188E22E936B71A24D3CBF88(L_9, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
		int32_t L_11 = ___1_maxDepth;
		RuntimeObject* L_12 = ___0_parentObject;
		String_t* L_13;
		L_13 = CoreExtensions_GetFields_m0640DD1BE4E6611D6E216598495F0FB6E00AEF99(0, L_11, _stringLiteral8A8EFDA91C6C257127F8C8D526FAD7E7552766AA, L_12, NULL);
		V_1 = L_13;
		String_t* L_14 = V_1;
		bool L_15;
		L_15 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_14, NULL);
		if (L_15)
		{
			goto IL_006c;
		}
	}
	{
		StringBuilder_t* L_16 = V_0;
		NullCheck(L_16);
		StringBuilder_t* L_17;
		L_17 = StringBuilder_AppendLine_mF75744CE941C63E33188E22E936B71A24D3CBF88(L_16, _stringLiteral7B0F74B596CC9D2DDF300DA4EFF02C6C830107ED, NULL);
		StringBuilder_t* L_18 = V_0;
		String_t* L_19 = V_1;
		NullCheck(L_18);
		StringBuilder_t* L_20;
		L_20 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_18, L_19, NULL);
	}

IL_006c:
	{
		StringBuilder_t* L_21 = V_0;
		NullCheck(L_21);
		String_t* L_22;
		L_22 = VirtualFuncInvoker0< String_t* >::Invoke(3, L_21);
		return L_22;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CoreExtensions_GetFields_m0640DD1BE4E6611D6E216598495F0FB6E00AEF99 (int32_t ___0_depth, int32_t ___1_maxDepth, String_t* ___2_space, RuntimeObject* ___3_parentObject, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral086C504C47273EF07233933225DBBAF9F1CBD69A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral28BE9A569DCCAECC3746AA7945F873F6CD56F68E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral786D7B9ABEABE8160318F22124FD74BA126263AF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral900D858FE9ABCD2ED2B25CD27110A78ADCC6EC6B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral960E5E7F211EFF3243DF14EDD1901DC9EF314D62);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD7D52FC864FBAB18F17165F5F2F678AD081BCEC7);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t* V_0 = NULL;
	FieldInfoU5BU5D_t50D47CBECF1AEB152F555803E3329D9E34DBF8D8* V_1 = NULL;
	String_t* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	int32_t V_4 = 0;
	Type_t* V_5 = NULL;
	Type_t* V_6 = NULL;
	FieldInfoU5BU5D_t50D47CBECF1AEB152F555803E3329D9E34DBF8D8* V_7 = NULL;
	RuntimeObject* V_8 = NULL;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	int32_t V_12 = 0;
	RuntimeObject* V_13 = NULL;
	int32_t G_B11_0 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B11_1 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B11_2 = NULL;
	StringBuilder_t* G_B11_3 = NULL;
	int32_t G_B10_0 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B10_1 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B10_2 = NULL;
	StringBuilder_t* G_B10_3 = NULL;
	String_t* G_B12_0 = NULL;
	int32_t G_B12_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B12_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B12_3 = NULL;
	StringBuilder_t* G_B12_4 = NULL;
	String_t* G_B26_0 = NULL;
	String_t* G_B26_1 = NULL;
	String_t* G_B26_2 = NULL;
	StringBuilder_t* G_B26_3 = NULL;
	String_t* G_B25_0 = NULL;
	String_t* G_B25_1 = NULL;
	String_t* G_B25_2 = NULL;
	StringBuilder_t* G_B25_3 = NULL;
	String_t* G_B27_0 = NULL;
	String_t* G_B27_1 = NULL;
	String_t* G_B27_2 = NULL;
	String_t* G_B27_3 = NULL;
	StringBuilder_t* G_B27_4 = NULL;
	{
		int32_t L_0 = ___0_depth;
		___0_depth = ((int32_t)il2cpp_codegen_add(L_0, 1));
		StringBuilder_t* L_1 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_1, NULL);
		V_0 = L_1;
		RuntimeObject* L_2 = ___3_parentObject;
		NullCheck(L_2);
		Type_t* L_3;
		L_3 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_2, NULL);
		NullCheck(L_3);
		FieldInfoU5BU5D_t50D47CBECF1AEB152F555803E3329D9E34DBF8D8* L_4;
		L_4 = VirtualFuncInvoker1< FieldInfoU5BU5D_t50D47CBECF1AEB152F555803E3329D9E34DBF8D8*, int32_t >::Invoke(84, L_3, ((int32_t)52));
		V_1 = L_4;
		V_4 = 0;
		goto IL_021c;
	}

IL_0021:
	{
		FieldInfoU5BU5D_t50D47CBECF1AEB152F555803E3329D9E34DBF8D8* L_5 = V_1;
		int32_t L_6 = V_4;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		FieldInfo_t* L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		NullCheck(L_8);
		Type_t* L_9;
		L_9 = VirtualFuncInvoker0< Type_t* >::Invoke(16, L_8);
		V_5 = L_9;
		FieldInfoU5BU5D_t50D47CBECF1AEB152F555803E3329D9E34DBF8D8* L_10 = V_1;
		int32_t L_11 = V_4;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		FieldInfo_t* L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		NullCheck(L_13);
		String_t* L_14;
		L_14 = VirtualFuncInvoker0< String_t* >::Invoke(7, L_13);
		V_2 = L_14;
		FieldInfoU5BU5D_t50D47CBECF1AEB152F555803E3329D9E34DBF8D8* L_15 = V_1;
		int32_t L_16 = V_4;
		NullCheck(L_15);
		int32_t L_17 = L_16;
		FieldInfo_t* L_18 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		RuntimeObject* L_19 = ___3_parentObject;
		NullCheck(L_18);
		RuntimeObject* L_20;
		L_20 = VirtualFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(23, L_18, L_19);
		V_3 = L_20;
		Type_t* L_21 = V_5;
		NullCheck(L_21);
		bool L_22;
		L_22 = Type_get_IsClass_mACC1E0E79C9996ADE9973F81971B740132B64549(L_21, NULL);
		if (!L_22)
		{
			goto IL_01f3;
		}
	}
	{
		Type_t* L_23 = V_5;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_24 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.string_class->byval_arg) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_25;
		L_25 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_24, NULL);
		bool L_26;
		L_26 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_23, L_25, NULL);
		if (!L_26)
		{
			goto IL_01f3;
		}
	}
	{
		Type_t* L_27 = V_5;
		NullCheck(L_27);
		bool L_28;
		L_28 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_27, NULL);
		if (!L_28)
		{
			goto IL_01a1;
		}
	}
	{
		Type_t* L_29 = V_5;
		NullCheck(L_29);
		Type_t* L_30;
		L_30 = VirtualFuncInvoker0< Type_t* >::Invoke(45, L_29);
		V_6 = L_30;
		Type_t* L_31 = V_6;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		bool L_32;
		L_32 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_31, (Type_t*)NULL, NULL);
		if (!L_32)
		{
			goto IL_0216;
		}
	}
	{
		Type_t* L_33 = V_6;
		NullCheck(L_33);
		FieldInfoU5BU5D_t50D47CBECF1AEB152F555803E3329D9E34DBF8D8* L_34;
		L_34 = VirtualFuncInvoker1< FieldInfoU5BU5D_t50D47CBECF1AEB152F555803E3329D9E34DBF8D8*, int32_t >::Invoke(84, L_33, ((int32_t)52));
		V_7 = L_34;
		RuntimeObject* L_35 = V_3;
		V_8 = ((RuntimeObject*)Castclass((RuntimeObject*)L_35, IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var));
		RuntimeObject* L_36 = V_8;
		if (!L_36)
		{
			goto IL_018c;
		}
	}
	{
		StringBuilder_t* L_37 = V_0;
		String_t* L_38 = ___2_space;
		String_t* L_39 = V_2;
		Type_t* L_40 = V_5;
		NullCheck(L_40);
		String_t* L_41;
		L_41 = VirtualFuncInvoker0< String_t* >::Invoke(3, L_40);
		String_t* L_42;
		L_42 = String_Concat_m093934F71A9B351911EE46311674ED463B180006(L_38, L_39, _stringLiteral960E5E7F211EFF3243DF14EDD1901DC9EF314D62, L_41, NULL);
		NullCheck(L_37);
		StringBuilder_t* L_43;
		L_43 = StringBuilder_AppendLine_mF75744CE941C63E33188E22E936B71A24D3CBF88(L_37, L_42, NULL);
		RuntimeObject* L_44 = V_8;
		NullCheck(L_44);
		int32_t L_45;
		L_45 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var, L_44);
		V_9 = L_45;
		V_10 = 0;
		goto IL_017e;
	}

IL_00ca:
	{
		StringBuilder_t* L_46 = V_0;
		String_t* L_47 = ___2_space;
		int32_t L_48 = V_10;
		V_11 = ((int32_t)il2cpp_codegen_add(L_48, 1));
		String_t* L_49;
		L_49 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_11), NULL);
		String_t* L_50;
		L_50 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(L_47, _stringLiteral086C504C47273EF07233933225DBBAF9F1CBD69A, L_49, NULL);
		NullCheck(L_46);
		StringBuilder_t* L_51;
		L_51 = StringBuilder_AppendLine_mF75744CE941C63E33188E22E936B71A24D3CBF88(L_46, L_50, NULL);
		RuntimeObject* L_52 = V_8;
		int32_t L_53 = V_10;
		NullCheck(L_52);
		RuntimeObject* L_54;
		L_54 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0, IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var, L_52, L_53);
		if (!L_54)
		{
			goto IL_0166;
		}
	}
	{
		V_12 = 0;
		goto IL_015c;
	}

IL_00f9:
	{
		FieldInfoU5BU5D_t50D47CBECF1AEB152F555803E3329D9E34DBF8D8* L_55 = V_7;
		int32_t L_56 = V_12;
		NullCheck(L_55);
		int32_t L_57 = L_56;
		FieldInfo_t* L_58 = (L_55)->GetAt(static_cast<il2cpp_array_size_t>(L_57));
		RuntimeObject* L_59 = V_8;
		int32_t L_60 = V_10;
		NullCheck(L_59);
		RuntimeObject* L_61;
		L_61 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0, IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var, L_59, L_60);
		NullCheck(L_58);
		RuntimeObject* L_62;
		L_62 = VirtualFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(23, L_58, L_61);
		V_13 = L_62;
		StringBuilder_t* L_63 = V_0;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_64 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)5);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_65 = L_64;
		String_t* L_66 = ___2_space;
		NullCheck(L_65);
		(L_65)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_66);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_67 = L_65;
		NullCheck(L_67);
		(L_67)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral28BE9A569DCCAECC3746AA7945F873F6CD56F68E);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_68 = L_67;
		FieldInfoU5BU5D_t50D47CBECF1AEB152F555803E3329D9E34DBF8D8* L_69 = V_7;
		int32_t L_70 = V_12;
		NullCheck(L_69);
		int32_t L_71 = L_70;
		FieldInfo_t* L_72 = (L_69)->GetAt(static_cast<il2cpp_array_size_t>(L_71));
		NullCheck(L_72);
		String_t* L_73;
		L_73 = VirtualFuncInvoker0< String_t* >::Invoke(7, L_72);
		NullCheck(L_68);
		(L_68)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)L_73);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_74 = L_68;
		NullCheck(L_74);
		(L_74)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteral960E5E7F211EFF3243DF14EDD1901DC9EF314D62);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_75 = L_74;
		RuntimeObject* L_76 = V_13;
		if (L_76)
		{
			G_B11_0 = 4;
			G_B11_1 = L_75;
			G_B11_2 = L_75;
			G_B11_3 = L_63;
			goto IL_0143;
		}
		G_B10_0 = 4;
		G_B10_1 = L_75;
		G_B10_2 = L_75;
		G_B10_3 = L_63;
	}
	{
		G_B12_0 = _stringLiteral900D858FE9ABCD2ED2B25CD27110A78ADCC6EC6B;
		G_B12_1 = G_B10_0;
		G_B12_2 = G_B10_1;
		G_B12_3 = G_B10_2;
		G_B12_4 = G_B10_3;
		goto IL_014a;
	}

IL_0143:
	{
		RuntimeObject* L_77 = V_13;
		NullCheck(L_77);
		String_t* L_78;
		L_78 = VirtualFuncInvoker0< String_t* >::Invoke(3, L_77);
		G_B12_0 = L_78;
		G_B12_1 = G_B11_0;
		G_B12_2 = G_B11_1;
		G_B12_3 = G_B11_2;
		G_B12_4 = G_B11_3;
	}

IL_014a:
	{
		NullCheck(G_B12_2);
		(G_B12_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B12_1), (String_t*)G_B12_0);
		String_t* L_79;
		L_79 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(G_B12_3, NULL);
		NullCheck(G_B12_4);
		StringBuilder_t* L_80;
		L_80 = StringBuilder_AppendLine_mF75744CE941C63E33188E22E936B71A24D3CBF88(G_B12_4, L_79, NULL);
		int32_t L_81 = V_12;
		V_12 = ((int32_t)il2cpp_codegen_add(L_81, 1));
	}

IL_015c:
	{
		int32_t L_82 = V_12;
		FieldInfoU5BU5D_t50D47CBECF1AEB152F555803E3329D9E34DBF8D8* L_83 = V_7;
		NullCheck(L_83);
		if ((((int32_t)L_82) < ((int32_t)((int32_t)(((RuntimeArray*)L_83)->max_length)))))
		{
			goto IL_00f9;
		}
	}
	{
		goto IL_0178;
	}

IL_0166:
	{
		StringBuilder_t* L_84 = V_0;
		String_t* L_85 = ___2_space;
		String_t* L_86;
		L_86 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_85, _stringLiteral786D7B9ABEABE8160318F22124FD74BA126263AF, NULL);
		NullCheck(L_84);
		StringBuilder_t* L_87;
		L_87 = StringBuilder_AppendLine_mF75744CE941C63E33188E22E936B71A24D3CBF88(L_84, L_86, NULL);
	}

IL_0178:
	{
		int32_t L_88 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add(L_88, 1));
	}

IL_017e:
	{
		int32_t L_89 = V_10;
		int32_t L_90 = V_9;
		if ((((int32_t)L_89) < ((int32_t)L_90)))
		{
			goto IL_00ca;
		}
	}
	{
		goto IL_0216;
	}

IL_018c:
	{
		StringBuilder_t* L_91 = V_0;
		String_t* L_92 = ___2_space;
		String_t* L_93 = V_2;
		String_t* L_94;
		L_94 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(L_92, L_93, _stringLiteralD7D52FC864FBAB18F17165F5F2F678AD081BCEC7, NULL);
		NullCheck(L_91);
		StringBuilder_t* L_95;
		L_95 = StringBuilder_AppendLine_mF75744CE941C63E33188E22E936B71A24D3CBF88(L_91, L_94, NULL);
		goto IL_0216;
	}

IL_01a1:
	{
		RuntimeObject* L_96 = V_3;
		if (!L_96)
		{
			goto IL_01de;
		}
	}
	{
		StringBuilder_t* L_97 = V_0;
		String_t* L_98 = ___2_space;
		String_t* L_99 = V_2;
		Type_t* L_100 = V_5;
		NullCheck(L_100);
		String_t* L_101;
		L_101 = VirtualFuncInvoker0< String_t* >::Invoke(3, L_100);
		String_t* L_102;
		L_102 = String_Concat_m093934F71A9B351911EE46311674ED463B180006(L_98, L_99, _stringLiteral960E5E7F211EFF3243DF14EDD1901DC9EF314D62, L_101, NULL);
		NullCheck(L_97);
		StringBuilder_t* L_103;
		L_103 = StringBuilder_AppendLine_mF75744CE941C63E33188E22E936B71A24D3CBF88(L_97, L_102, NULL);
		int32_t L_104 = ___0_depth;
		int32_t L_105 = ___1_maxDepth;
		if ((((int32_t)L_104) >= ((int32_t)L_105)))
		{
			goto IL_0216;
		}
	}
	{
		StringBuilder_t* L_106 = V_0;
		int32_t L_107 = ___0_depth;
		int32_t L_108 = ___1_maxDepth;
		String_t* L_109 = ___2_space;
		String_t* L_110;
		L_110 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_109, _stringLiteral28BE9A569DCCAECC3746AA7945F873F6CD56F68E, NULL);
		RuntimeObject* L_111 = V_3;
		String_t* L_112;
		L_112 = CoreExtensions_GetFields_m0640DD1BE4E6611D6E216598495F0FB6E00AEF99(L_107, L_108, L_110, L_111, NULL);
		NullCheck(L_106);
		StringBuilder_t* L_113;
		L_113 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_106, L_112, NULL);
		goto IL_0216;
	}

IL_01de:
	{
		StringBuilder_t* L_114 = V_0;
		String_t* L_115 = ___2_space;
		String_t* L_116 = V_2;
		String_t* L_117;
		L_117 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(L_115, L_116, _stringLiteralD7D52FC864FBAB18F17165F5F2F678AD081BCEC7, NULL);
		NullCheck(L_114);
		StringBuilder_t* L_118;
		L_118 = StringBuilder_AppendLine_mF75744CE941C63E33188E22E936B71A24D3CBF88(L_114, L_117, NULL);
		goto IL_0216;
	}

IL_01f3:
	{
		StringBuilder_t* L_119 = V_0;
		String_t* L_120 = ___2_space;
		String_t* L_121 = V_2;
		RuntimeObject* L_122 = V_3;
		if (L_122)
		{
			G_B26_0 = _stringLiteral960E5E7F211EFF3243DF14EDD1901DC9EF314D62;
			G_B26_1 = L_121;
			G_B26_2 = L_120;
			G_B26_3 = L_119;
			goto IL_0205;
		}
		G_B25_0 = _stringLiteral960E5E7F211EFF3243DF14EDD1901DC9EF314D62;
		G_B25_1 = L_121;
		G_B25_2 = L_120;
		G_B25_3 = L_119;
	}
	{
		G_B27_0 = _stringLiteral900D858FE9ABCD2ED2B25CD27110A78ADCC6EC6B;
		G_B27_1 = G_B25_0;
		G_B27_2 = G_B25_1;
		G_B27_3 = G_B25_2;
		G_B27_4 = G_B25_3;
		goto IL_020b;
	}

IL_0205:
	{
		RuntimeObject* L_123 = V_3;
		NullCheck(L_123);
		String_t* L_124;
		L_124 = VirtualFuncInvoker0< String_t* >::Invoke(3, L_123);
		G_B27_0 = L_124;
		G_B27_1 = G_B26_0;
		G_B27_2 = G_B26_1;
		G_B27_3 = G_B26_2;
		G_B27_4 = G_B26_3;
	}

IL_020b:
	{
		String_t* L_125;
		L_125 = String_Concat_m093934F71A9B351911EE46311674ED463B180006(G_B27_3, G_B27_2, G_B27_1, G_B27_0, NULL);
		NullCheck(G_B27_4);
		StringBuilder_t* L_126;
		L_126 = StringBuilder_AppendLine_mF75744CE941C63E33188E22E936B71A24D3CBF88(G_B27_4, L_125, NULL);
	}

IL_0216:
	{
		int32_t L_127 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_127, 1));
	}

IL_021c:
	{
		int32_t L_128 = V_4;
		FieldInfoU5BU5D_t50D47CBECF1AEB152F555803E3329D9E34DBF8D8* L_129 = V_1;
		NullCheck(L_129);
		if ((((int32_t)L_128) < ((int32_t)((int32_t)(((RuntimeArray*)L_129)->max_length)))))
		{
			goto IL_0021;
		}
	}
	{
		StringBuilder_t* L_130 = V_0;
		NullCheck(L_130);
		String_t* L_131;
		L_131 = VirtualFuncInvoker0< String_t* >::Invoke(3, L_130);
		return L_131;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CoreExtensions_IsTargetHigherThanViewport_mCE14514B500CB10A5503E889C23AE11242A2D9DF (ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E* ___0_scrollRect, RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___1_target, const RuntimeMethod* method) 
{
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E* L_0 = ___0_scrollRect;
		NullCheck(L_0);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_1;
		L_1 = ScrollRect_get_viewport_m85092216DD476F77E78F5CE50F9C4E70063ECCF9_inline(L_0, NULL);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_2 = ___1_target;
		NullCheck(L_2);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_2, NULL);
		NullCheck(L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_3, NULL);
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Transform_InverseTransformPoint_m18CD395144D9C78F30E15A5B82B6670E792DBA5D(L_1, L_4, NULL);
		float L_6 = L_5.___y;
		ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E* L_7 = ___0_scrollRect;
		NullCheck(L_7);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_8;
		L_8 = ScrollRect_get_viewport_m85092216DD476F77E78F5CE50F9C4E70063ECCF9_inline(L_7, NULL);
		NullCheck(L_8);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_9;
		L_9 = RectTransform_get_rect_mC82A60F8C3805ED9833508CCC233689641207488(L_8, NULL);
		V_0 = L_9;
		float L_10;
		L_10 = Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8_inline((&V_0), NULL);
		return (bool)((((float)((float)il2cpp_codegen_subtract(L_6, ((float)(L_10/(2.0f)))))) > ((float)(0.0f)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CoreExtensions_IsTargetLowerThanViewport_mC17A7BD60754B43B97170B8AB5073A274604D4BF (ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E* ___0_scrollRect, RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___1_target, const RuntimeMethod* method) 
{
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_0 = ___1_target;
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_0, NULL);
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_1, NULL);
		float L_3 = L_2.___y;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_4 = ___1_target;
		NullCheck(L_4);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5;
		L_5 = RectTransform_get_sizeDelta_m822A8493F2035677384F1540A2E9E5ACE63010BB(L_4, NULL);
		float L_6 = L_5.___y;
		ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E* L_7 = ___0_scrollRect;
		NullCheck(L_7);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_8;
		L_8 = ScrollRect_get_viewport_m85092216DD476F77E78F5CE50F9C4E70063ECCF9_inline(L_7, NULL);
		NullCheck(L_8);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_9;
		L_9 = RectTransform_get_rect_mC82A60F8C3805ED9833508CCC233689641207488(L_8, NULL);
		V_0 = L_9;
		float L_10;
		L_10 = Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8_inline((&V_0), NULL);
		return (bool)((((float)((float)il2cpp_codegen_add(((-L_3)), L_6))) > ((float)L_10))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CoreExtensions_SnapTargetBottom_m513621B3F4AA4BCBA466998BECCC0504D6D8CB39 (ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E* ___0_scrollRect, RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___1_target, float ___2_offsetX, float ___3_offsetY, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_0 = ___1_target;
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_0, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline(NULL);
		ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E* L_3 = ___0_scrollRect;
		NullCheck(L_3);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_4;
		L_4 = ScrollRect_get_viewport_m85092216DD476F77E78F5CE50F9C4E70063ECCF9_inline(L_3, NULL);
		NullCheck(L_4);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_5;
		L_5 = RectTransform_get_rect_mC82A60F8C3805ED9833508CCC233689641207488(L_4, NULL);
		V_1 = L_5;
		float L_6;
		L_6 = Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8_inline((&V_1), NULL);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_7 = ___1_target;
		NullCheck(L_7);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_8;
		L_8 = RectTransform_get_rect_mC82A60F8C3805ED9833508CCC233689641207488(L_7, NULL);
		V_1 = L_8;
		float L_9;
		L_9 = Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8_inline((&V_1), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_2, ((float)il2cpp_codegen_subtract(L_6, L_9)), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_1, L_10, NULL);
		V_0 = L_11;
		ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E* L_12 = ___0_scrollRect;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		float L_14 = ___2_offsetX;
		float L_15 = ___3_offsetY;
		CoreExtensions_SnapToTarget_mBA1B5F76F59248304941F99CAA7E330159BF39C4(L_12, L_13, L_14, L_15, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CoreExtensions_SnapTargetTop_m0EF63538EA9C2BEF73D32B362B19454F813502D4 (ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E* ___0_scrollRect, RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___1_target, float ___2_offsetX, float ___3_offsetY, const RuntimeMethod* method) 
{
	{
		ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E* L_0 = ___0_scrollRect;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_1 = ___1_target;
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_1, NULL);
		float L_3 = ___2_offsetX;
		float L_4 = ___3_offsetY;
		CoreExtensions_SnapToTarget_mBA1B5F76F59248304941F99CAA7E330159BF39C4(L_0, L_2, L_3, L_4, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CoreExtensions_SnapToTarget_mBA1B5F76F59248304941F99CAA7E330159BF39C4 (ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E* ___0_scrollRect, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_target, float ___2_offsetX, float ___3_offsetY, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E* L_0 = ___0_scrollRect;
		NullCheck(L_0);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_1;
		L_1 = ScrollRect_get_viewport_m85092216DD476F77E78F5CE50F9C4E70063ECCF9_inline(L_0, NULL);
		ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E* L_2 = ___0_scrollRect;
		NullCheck(L_2);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_3;
		L_3 = ScrollRect_get_content_m7878BCA28A96B7FBA02DC466A1ED2C9E191C6996_inline(L_2, NULL);
		NullCheck(L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_3, NULL);
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Transform_InverseTransformPoint_m18CD395144D9C78F30E15A5B82B6670E792DBA5D(L_1, L_4, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		L_6 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_5, NULL);
		V_0 = L_6;
		ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E* L_7 = ___0_scrollRect;
		NullCheck(L_7);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_8;
		L_8 = ScrollRect_get_viewport_m85092216DD476F77E78F5CE50F9C4E70063ECCF9_inline(L_7, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = ___1_target;
		NullCheck(L_8);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Transform_InverseTransformPoint_m18CD395144D9C78F30E15A5B82B6670E792DBA5D(L_8, L_9, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_11;
		L_11 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_10, NULL);
		V_1 = L_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_12 = V_1;
		float L_13 = L_12.___x;
		float L_14 = ___2_offsetX;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_15 = V_1;
		float L_16 = L_15.___y;
		float L_17 = ___3_offsetY;
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&V_1), ((float)il2cpp_codegen_add(L_13, L_14)), ((float)il2cpp_codegen_add(L_16, L_17)), NULL);
		ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E* L_18 = ___0_scrollRect;
		NullCheck(L_18);
		bool L_19;
		L_19 = ScrollRect_get_horizontal_mDA4358EF29CE64E6B346D6CC5D70E08F00D3D05B_inline(L_18, NULL);
		if (L_19)
		{
			goto IL_005a;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_20 = V_0;
		float L_21 = L_20.___x;
		(&V_1)->___x = L_21;
	}

IL_005a:
	{
		ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E* L_22 = ___0_scrollRect;
		NullCheck(L_22);
		bool L_23;
		L_23 = ScrollRect_get_vertical_m43F2C650302CB71D53A0A373934CA9F9921CC38B_inline(L_22, NULL);
		if (L_23)
		{
			goto IL_006f;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_24 = V_0;
		float L_25 = L_24.___y;
		(&V_1)->___y = L_25;
	}

IL_006f:
	{
		ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E* L_26 = ___0_scrollRect;
		NullCheck(L_26);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_27;
		L_27 = ScrollRect_get_content_m7878BCA28A96B7FBA02DC466A1ED2C9E191C6996_inline(L_26, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_28 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_29 = V_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_30;
		L_30 = Vector2_op_Subtraction_m44475FCDAD2DA2F98D78A6625EC2DCDFE8803837_inline(L_28, L_29, NULL);
		NullCheck(L_27);
		RectTransform_set_anchoredPosition_mF903ACE04F6959B1CD67E2B94FABC0263068F965(L_27, L_30, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ExtendedRandom_TrueFalse_mBDE37401B105CA08C571257210A28601D53251FA (const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68(0, 2, NULL);
		return (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextureExtensions_DrawLine_m5DAA894F4FB907C16BCEE5E377E65B8250673579 (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___0_texture, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_p1, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___2_p2, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___3_col, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___1_p1;
		V_0 = L_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = ___2_p2;
		float L_2 = L_1.___x;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = ___1_p1;
		float L_4 = L_3.___x;
		float L_5;
		L_5 = powf(((float)il2cpp_codegen_subtract(L_2, L_4)), (2.0f));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___2_p2;
		float L_7 = L_6.___y;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8 = ___1_p1;
		float L_9 = L_8.___y;
		float L_10;
		L_10 = powf(((float)il2cpp_codegen_subtract(L_7, L_9)), (2.0f));
		float L_11;
		L_11 = sqrtf(((float)il2cpp_codegen_add(L_5, L_10)));
		V_1 = ((float)((1.0f)/L_11));
		V_2 = (0.0f);
		goto IL_0067;
	}

IL_0045:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_12 = ___1_p1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_13 = ___2_p2;
		float L_14 = V_2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_15;
		L_15 = Vector2_Lerp_m1A36103F7967F653A929556E26E6D052C298C00C_inline(L_12, L_13, L_14, NULL);
		V_0 = L_15;
		float L_16 = V_2;
		float L_17 = V_1;
		V_2 = ((float)il2cpp_codegen_add(L_16, L_17));
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_18 = ___0_texture;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_19 = V_0;
		float L_20 = L_19.___x;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_21 = V_0;
		float L_22 = L_21.___y;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_23 = ___3_col;
		NullCheck(L_18);
		Texture2D_SetPixel_m2CCFC5F729135D59DC4A697C2605A3FC5C8574DB(L_18, il2cpp_codegen_cast_double_to_int<int32_t>(L_20), il2cpp_codegen_cast_double_to_int<int32_t>(L_22), L_23, NULL);
	}

IL_0067:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_24 = V_0;
		float L_25 = L_24.___x;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_26 = ___2_p2;
		float L_27 = L_26.___x;
		if ((!(((uint32_t)il2cpp_codegen_cast_double_to_int<int32_t>(L_25)) == ((uint32_t)il2cpp_codegen_cast_double_to_int<int32_t>(L_27)))))
		{
			goto IL_0045;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_28 = V_0;
		float L_29 = L_28.___y;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_30 = ___2_p2;
		float L_31 = L_30.___y;
		if ((!(((uint32_t)il2cpp_codegen_cast_double_to_int<int32_t>(L_29)) == ((uint32_t)il2cpp_codegen_cast_double_to_int<int32_t>(L_31)))))
		{
			goto IL_0045;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextureExtensions_DrawBigDot_m5911F88A5925876A1CB79828F81C31DD4F69048E (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___0_texture, int32_t ___1_x, int32_t ___2_y, int32_t ___3_radius, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___4_color, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		int32_t L_0 = ___3_radius;
		V_0 = ((int32_t)(L_0/2));
		int32_t L_1 = ___1_x;
		int32_t L_2 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_1, L_2));
		goto IL_0042;
	}

IL_000a:
	{
		int32_t L_3 = ___2_y;
		int32_t L_4 = V_0;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_3, L_4));
		goto IL_0038;
	}

IL_0010:
	{
		int32_t L_5 = V_1;
		if ((((int32_t)L_5) < ((int32_t)0)))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_6 = V_2;
		if ((((int32_t)L_6) < ((int32_t)0)))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_7 = V_1;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_8 = ___0_texture;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = VirtualFuncInvoker0< int32_t >::Invoke(5, L_8);
		if ((((int32_t)L_7) >= ((int32_t)L_9)))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_10 = V_2;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_11 = ___0_texture;
		NullCheck(L_11);
		int32_t L_12;
		L_12 = VirtualFuncInvoker0< int32_t >::Invoke(7, L_11);
		if ((((int32_t)L_10) >= ((int32_t)L_12)))
		{
			goto IL_0034;
		}
	}
	{
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_13 = ___0_texture;
		int32_t L_14 = V_1;
		int32_t L_15 = V_2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_16 = ___4_color;
		NullCheck(L_13);
		Texture2D_SetPixel_m2CCFC5F729135D59DC4A697C2605A3FC5C8574DB(L_13, L_14, L_15, L_16, NULL);
	}

IL_0034:
	{
		int32_t L_17 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_17, 1));
	}

IL_0038:
	{
		int32_t L_18 = V_2;
		int32_t L_19 = ___2_y;
		int32_t L_20 = V_0;
		if ((((int32_t)L_18) < ((int32_t)((int32_t)il2cpp_codegen_add(L_19, L_20)))))
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_21 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_0042:
	{
		int32_t L_22 = V_1;
		int32_t L_23 = ___1_x;
		int32_t L_24 = V_0;
		if ((((int32_t)L_22) < ((int32_t)((int32_t)il2cpp_codegen_add(L_23, L_24)))))
		{
			goto IL_000a;
		}
	}
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Bezier_EvaluateQuadratic_mED1DAEEA2B1329815ED4DBDA54947DDAC29C110F (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___2_c, float ___3_t, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___1_b;
		float L_2 = ___3_t;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Vector3_Lerp_m3A906D0530A94FAABB94F0F905E84D99BE85C3F8_inline(L_0, L_1, L_2, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___1_b;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = ___2_c;
		float L_6 = ___3_t;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_Lerp_m3A906D0530A94FAABB94F0F905E84D99BE85C3F8_inline(L_4, L_5, L_6, NULL);
		V_0 = L_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = V_0;
		float L_9 = ___3_t;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Vector3_Lerp_m3A906D0530A94FAABB94F0F905E84D99BE85C3F8_inline(L_3, L_8, L_9, NULL);
		return L_10;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Bezier_EvaluateCubic_m8A1BB1FEEE6483E8BE504AE23558BFE8E1427DE9 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___2_c, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___3_d, float ___4_t, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___1_b;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___2_c;
		float L_3 = ___4_t;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Bezier_EvaluateQuadratic_mED1DAEEA2B1329815ED4DBDA54947DDAC29C110F(L_0, L_1, L_2, L_3, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = ___1_b;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___2_c;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = ___3_d;
		float L_8 = ___4_t;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Bezier_EvaluateQuadratic_mED1DAEEA2B1329815ED4DBDA54947DDAC29C110F(L_5, L_6, L_7, L_8, NULL);
		V_0 = L_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		float L_11 = ___4_t;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Vector3_Lerp_m3A906D0530A94FAABB94F0F905E84D99BE85C3F8_inline(L_4, L_10, L_11, NULL);
		return L_12;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Bezier_AproximateLength_mF2A86159D5719F81853B5983FE34D3531CB41157 (Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___0_points, const RuntimeMethod* method) 
{
	{
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_0 = ___0_points;
		NullCheck(L_0);
		int32_t L_1 = 0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_3 = ___0_points;
		NullCheck(L_3);
		int32_t L_4 = 1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_6 = ___0_points;
		NullCheck(L_6);
		int32_t L_7 = 2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_9 = ___0_points;
		NullCheck(L_9);
		int32_t L_10 = 3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		float L_12;
		L_12 = Bezier_AproximateLength_mAACCE932DDE5B5BF77AA2F76189E5A68E2FCD1F2(L_2, L_5, L_8, L_11, NULL);
		return L_12;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Bezier_AproximateLength_mAACCE932DDE5B5BF77AA2F76189E5A68E2FCD1F2 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_p0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_p1, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___2_p2, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___3_p3, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___3_p3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___0_p0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_0, L_1, NULL);
		V_1 = L_2;
		float L_3;
		L_3 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline((&V_1), NULL);
		V_0 = L_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_p0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = ___1_p1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_4, L_5, NULL);
		V_1 = L_6;
		float L_7;
		L_7 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline((&V_1), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___2_p2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = ___1_p1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_8, L_9, NULL);
		V_1 = L_10;
		float L_11;
		L_11 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline((&V_1), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12 = ___3_p3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = ___2_p2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_12, L_13, NULL);
		V_1 = L_14;
		float L_15;
		L_15 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline((&V_1), NULL);
		float L_16 = V_0;
		return ((float)(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(L_7, L_11)), L_15)), L_16))/(2.0f)));
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOUtils_CreatePath_mC009FB8DEB2D9504ECC8F8509D820BD91CF9F73C (String_t* ___0_path, Il2CppChar ___1_separator, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_0 = NULL;
	int32_t V_1 = 0;
	String_t* V_2 = NULL;
	int32_t V_3 = 0;
	{
		String_t* L_0 = ___0_path;
		bool L_1;
		L_1 = Directory_Exists_m3D125E9E88C291CF11113444F961A64DD83AE1C7(L_0, NULL);
		if (!L_1)
		{
			goto IL_0009;
		}
	}
	{
		return;
	}

IL_0009:
	{
		String_t* L_2 = ___0_path;
		Il2CppChar L_3 = ___1_separator;
		NullCheck(L_2);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4;
		L_4 = String_Split_m9530B73D02054692283BF35C3A27C8F2230946F4(L_2, L_3, 0, NULL);
		V_0 = L_4;
		V_1 = 0;
		goto IL_005a;
	}

IL_0016:
	{
		V_2 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		V_3 = 0;
		goto IL_0033;
	}

IL_0020:
	{
		String_t* L_5 = V_2;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_6 = V_0;
		int32_t L_7 = V_3;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		String_t* L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		String_t* L_10;
		L_10 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(L_5, L_9, _stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1, NULL);
		V_2 = L_10;
		int32_t L_11 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0033:
	{
		int32_t L_12 = V_3;
		int32_t L_13 = V_1;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_0020;
		}
	}
	{
		String_t* L_14 = V_2;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_15 = V_0;
		int32_t L_16 = V_1;
		NullCheck(L_15);
		int32_t L_17 = L_16;
		String_t* L_18 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		String_t* L_19;
		L_19 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_14, L_18, NULL);
		bool L_20;
		L_20 = Directory_Exists_m3D125E9E88C291CF11113444F961A64DD83AE1C7(L_19, NULL);
		if (L_20)
		{
			goto IL_0056;
		}
	}
	{
		String_t* L_21 = V_2;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_22 = V_0;
		int32_t L_23 = V_1;
		NullCheck(L_22);
		int32_t L_24 = L_23;
		String_t* L_25 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
		String_t* L_26;
		L_26 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_21, L_25, NULL);
		DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2* L_27;
		L_27 = Directory_CreateDirectory_m16EC5CE8561A997C6635E06DC24C77590F29D94F(L_26, NULL);
	}

IL_0056:
	{
		int32_t L_28 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_28, 1));
	}

IL_005a:
	{
		int32_t L_29 = V_1;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_30 = V_0;
		NullCheck(L_30);
		if ((((int32_t)L_29) < ((int32_t)((int32_t)(((RuntimeArray*)L_30)->max_length)))))
		{
			goto IL_0016;
		}
	}
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RagdollHelper_CreateRagdoll_m9DBC81D867AD985E11754A9CE2C9F889B9124680 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___0_animator, float ___1_totalMass, float ___2_strength, int32_t ___3_layer, const RuntimeMethod* method) 
{
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReflectionUtils_GetParentTypes_mA1DD04C0EFA4CC468468EBEDB0BAB4B517AB8767 (Type_t* ___0_type, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CGetParentTypesU3Ed__12_t71E485860AB411A40B326CDA2EEB24ECC1316D1E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CGetParentTypesU3Ed__12_t71E485860AB411A40B326CDA2EEB24ECC1316D1E* L_0 = (U3CGetParentTypesU3Ed__12_t71E485860AB411A40B326CDA2EEB24ECC1316D1E*)il2cpp_codegen_object_new(U3CGetParentTypesU3Ed__12_t71E485860AB411A40B326CDA2EEB24ECC1316D1E_il2cpp_TypeInfo_var);
		U3CGetParentTypesU3Ed__12__ctor_m3F8BF5C90AE67171C1F6FCCF7440AE2F5C59A65D(L_0, ((int32_t)-2), NULL);
		U3CGetParentTypesU3Ed__12_t71E485860AB411A40B326CDA2EEB24ECC1316D1E* L_1 = L_0;
		Type_t* L_2 = ___0_type;
		NullCheck(L_1);
		L_1->___U3CU3E3__type = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E3__type), (void*)L_2);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReflectionUtils__cctor_mB81CC4E39B6C28BC08F32761D22B821C43FFA0CC (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReflectionUtils_tC59876FCD590777CA25AA95EC9DA88C9D2F3A59A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		((ReflectionUtils_tC59876FCD590777CA25AA95EC9DA88C9D2F3A59A_StaticFields*)il2cpp_codegen_static_fields_for(ReflectionUtils_tC59876FCD590777CA25AA95EC9DA88C9D2F3A59A_il2cpp_TypeInfo_var))->___FLAGS_INSTANCE = ((int32_t)52);
		((ReflectionUtils_tC59876FCD590777CA25AA95EC9DA88C9D2F3A59A_StaticFields*)il2cpp_codegen_static_fields_for(ReflectionUtils_tC59876FCD590777CA25AA95EC9DA88C9D2F3A59A_il2cpp_TypeInfo_var))->___FLAGS_STATIC = ((int32_t)60);
		((ReflectionUtils_tC59876FCD590777CA25AA95EC9DA88C9D2F3A59A_StaticFields*)il2cpp_codegen_static_fields_for(ReflectionUtils_tC59876FCD590777CA25AA95EC9DA88C9D2F3A59A_il2cpp_TypeInfo_var))->___FLAGS_INSTANCE_PRIVATE = ((int32_t)36);
		((ReflectionUtils_tC59876FCD590777CA25AA95EC9DA88C9D2F3A59A_StaticFields*)il2cpp_codegen_static_fields_for(ReflectionUtils_tC59876FCD590777CA25AA95EC9DA88C9D2F3A59A_il2cpp_TypeInfo_var))->___FLAGS_INSTANCE_PUBLIC = ((int32_t)20);
		((ReflectionUtils_tC59876FCD590777CA25AA95EC9DA88C9D2F3A59A_StaticFields*)il2cpp_codegen_static_fields_for(ReflectionUtils_tC59876FCD590777CA25AA95EC9DA88C9D2F3A59A_il2cpp_TypeInfo_var))->___FLAGS_STATIC_PRIVATE = ((int32_t)40);
		((ReflectionUtils_tC59876FCD590777CA25AA95EC9DA88C9D2F3A59A_StaticFields*)il2cpp_codegen_static_fields_for(ReflectionUtils_tC59876FCD590777CA25AA95EC9DA88C9D2F3A59A_il2cpp_TypeInfo_var))->___FLAGS_STATIC_PUBLIC = ((int32_t)24);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetParentTypesU3Ed__12__ctor_m3F8BF5C90AE67171C1F6FCCF7440AE2F5C59A65D (U3CGetParentTypesU3Ed__12_t71E485860AB411A40B326CDA2EEB24ECC1316D1E* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state = L_0;
		int32_t L_1;
		L_1 = Environment_get_CurrentManagedThreadId_m66483AADCCC13272EBDCD94D31D2E52603C24BDF(NULL);
		__this->___U3CU3El__initialThreadId = L_1;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetParentTypesU3Ed__12_System_IDisposable_Dispose_m8E25C3358856C53E25548A13A06891B43B1EE830 (U3CGetParentTypesU3Ed__12_t71E485860AB411A40B326CDA2EEB24ECC1316D1E* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CGetParentTypesU3Ed__12_MoveNext_m11C3AA00647C4AA009D42D7838B018415E776FFC (U3CGetParentTypesU3Ed__12_t71E485860AB411A40B326CDA2EEB24ECC1316D1E* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state;
		V_0 = L_0;
		int32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_001b;
			}
			case 1:
			{
				goto IL_0037;
			}
			case 2:
			{
				goto IL_0066;
			}
		}
	}
	{
		return (bool)0;
	}

IL_001b:
	{
		__this->___U3CU3E1__state = (-1);
		Type_t* L_2 = __this->___type;
		__this->___U3CU3E2__current = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current), (void*)L_2);
		__this->___U3CU3E1__state = 1;
		return (bool)1;
	}

IL_0037:
	{
		__this->___U3CU3E1__state = (-1);
		Type_t* L_3 = __this->___type;
		NullCheck(L_3);
		Type_t* L_4;
		L_4 = VirtualFuncInvoker0< Type_t* >::Invoke(109, L_3);
		__this->___U3CbaseTypeU3E5__2 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CbaseTypeU3E5__2), (void*)L_4);
		goto IL_007e;
	}

IL_0051:
	{
		Type_t* L_5 = __this->___U3CbaseTypeU3E5__2;
		__this->___U3CU3E2__current = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current), (void*)L_5);
		__this->___U3CU3E1__state = 2;
		return (bool)1;
	}

IL_0066:
	{
		__this->___U3CU3E1__state = (-1);
		Type_t* L_6 = __this->___U3CbaseTypeU3E5__2;
		NullCheck(L_6);
		Type_t* L_7;
		L_7 = VirtualFuncInvoker0< Type_t* >::Invoke(109, L_6);
		__this->___U3CbaseTypeU3E5__2 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CbaseTypeU3E5__2), (void*)L_7);
	}

IL_007e:
	{
		Type_t* L_8 = __this->___U3CbaseTypeU3E5__2;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		bool L_9;
		L_9 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_8, (Type_t*)NULL, NULL);
		if (L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* U3CGetParentTypesU3Ed__12_System_Collections_Generic_IEnumeratorU3CSystem_TypeU3E_get_Current_m00DBCE64AE48BE9FBB10D297B6E7D9BC59D254BF (U3CGetParentTypesU3Ed__12_t71E485860AB411A40B326CDA2EEB24ECC1316D1E* __this, const RuntimeMethod* method) 
{
	{
		Type_t* L_0 = __this->___U3CU3E2__current;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetParentTypesU3Ed__12_System_Collections_IEnumerator_Reset_m6F4378FAD7EDCD9AB96C65B24C5EF3F604A04A83 (U3CGetParentTypesU3Ed__12_t71E485860AB411A40B326CDA2EEB24ECC1316D1E* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CGetParentTypesU3Ed__12_System_Collections_IEnumerator_Reset_m6F4378FAD7EDCD9AB96C65B24C5EF3F604A04A83_RuntimeMethod_var)));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGetParentTypesU3Ed__12_System_Collections_IEnumerator_get_Current_m33640F58885C0B517F1F3CA5D7F7170EBF6D8C98 (U3CGetParentTypesU3Ed__12_t71E485860AB411A40B326CDA2EEB24ECC1316D1E* __this, const RuntimeMethod* method) 
{
	{
		Type_t* L_0 = __this->___U3CU3E2__current;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGetParentTypesU3Ed__12_System_Collections_Generic_IEnumerableU3CSystem_TypeU3E_GetEnumerator_mFBE5F6BAF8828090F6BABA58B640870E9BA7B87C (U3CGetParentTypesU3Ed__12_t71E485860AB411A40B326CDA2EEB24ECC1316D1E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CGetParentTypesU3Ed__12_t71E485860AB411A40B326CDA2EEB24ECC1316D1E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CGetParentTypesU3Ed__12_t71E485860AB411A40B326CDA2EEB24ECC1316D1E* V_0 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state;
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_1 = __this->___U3CU3El__initialThreadId;
		int32_t L_2;
		L_2 = Environment_get_CurrentManagedThreadId_m66483AADCCC13272EBDCD94D31D2E52603C24BDF(NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)L_2))))
		{
			goto IL_0022;
		}
	}
	{
		__this->___U3CU3E1__state = 0;
		V_0 = __this;
		goto IL_0029;
	}

IL_0022:
	{
		U3CGetParentTypesU3Ed__12_t71E485860AB411A40B326CDA2EEB24ECC1316D1E* L_3 = (U3CGetParentTypesU3Ed__12_t71E485860AB411A40B326CDA2EEB24ECC1316D1E*)il2cpp_codegen_object_new(U3CGetParentTypesU3Ed__12_t71E485860AB411A40B326CDA2EEB24ECC1316D1E_il2cpp_TypeInfo_var);
		U3CGetParentTypesU3Ed__12__ctor_m3F8BF5C90AE67171C1F6FCCF7440AE2F5C59A65D(L_3, 0, NULL);
		V_0 = L_3;
	}

IL_0029:
	{
		U3CGetParentTypesU3Ed__12_t71E485860AB411A40B326CDA2EEB24ECC1316D1E* L_4 = V_0;
		Type_t* L_5 = __this->___U3CU3E3__type;
		NullCheck(L_4);
		L_4->___type = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&L_4->___type), (void*)L_5);
		U3CGetParentTypesU3Ed__12_t71E485860AB411A40B326CDA2EEB24ECC1316D1E* L_6 = V_0;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGetParentTypesU3Ed__12_System_Collections_IEnumerable_GetEnumerator_mDCED19851E15FB1C906C41662BD9DBD1C1F66868 (U3CGetParentTypesU3Ed__12_t71E485860AB411A40B326CDA2EEB24ECC1316D1E* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0;
		L_0 = U3CGetParentTypesU3Ed__12_System_Collections_Generic_IEnumerableU3CSystem_TypeU3E_GetEnumerator_mFBE5F6BAF8828090F6BABA58B640870E9BA7B87C(__this, NULL);
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeEditorUtils_SetDirty_mC1A4C4596BE2CC08BD923B566CC74E0AB1AD40EE (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_obj, const RuntimeMethod* method) 
{
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeEditorUtils_MoveComponentUp_m605A7C7057895958A53AB405E4401C358B771004 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* ___0_component, const RuntimeMethod* method) 
{
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeEditorUtils_MoveComponentDown_m2A5639587E1E3F8D975EDDFF65090A2DEC9411AC (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* ___0_component, const RuntimeMethod* method) 
{
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeEditorUtils_ToggleVisibility_mB7D8ED9B215BED4FC3CD2A7A3BE555A3F6EEA366 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_gameObject, bool ___1_state, const RuntimeMethod* method) 
{
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeEditorUtils_TogglePicking_m7D1F8E91C828FDEA486415042DDDE0F3E4FCBDAE (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_gameObject, bool ___1_state, const RuntimeMethod* method) 
{
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SceneUtils_DoesSceneExist_m279F4EFE4A680CCB61ACC396760AF5A94F6582FD (String_t* ___0_name, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	String_t* V_1 = NULL;
	int32_t V_2 = 0;
	String_t* V_3 = NULL;
	{
		String_t* L_0 = ___0_name;
		bool L_1;
		L_1 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_0, NULL);
		if (!L_1)
		{
			goto IL_000a;
		}
	}
	{
		return (bool)0;
	}

IL_000a:
	{
		V_0 = 0;
		goto IL_004a;
	}

IL_000e:
	{
		int32_t L_2 = V_0;
		String_t* L_3;
		L_3 = SceneUtility_GetScenePathByBuildIndex_mB0848A585AFBB0C15CB344C43BD7BF79B1FEE860(L_2, NULL);
		V_1 = L_3;
		String_t* L_4 = V_1;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = String_LastIndexOf_m8923DBD89F2B3E5A34190B038B48F402E0C17E40(L_4, _stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1, NULL);
		V_2 = L_5;
		String_t* L_6 = V_1;
		int32_t L_7 = V_2;
		String_t* L_8 = V_1;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = String_LastIndexOf_m8923DBD89F2B3E5A34190B038B48F402E0C17E40(L_8, _stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D, NULL);
		int32_t L_10 = V_2;
		NullCheck(L_6);
		String_t* L_11;
		L_11 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_6, ((int32_t)il2cpp_codegen_add(L_7, 1)), ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(L_9, L_10)), 1)), NULL);
		V_3 = L_11;
		String_t* L_12 = ___0_name;
		String_t* L_13 = V_3;
		int32_t L_14;
		L_14 = String_Compare_m9772C6EB9834E1AD625F4663FB9A519AB10A3A14(L_12, L_13, (bool)1, NULL);
		if (L_14)
		{
			goto IL_0046;
		}
	}
	{
		return (bool)1;
	}

IL_0046:
	{
		int32_t L_15 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_15, 1));
	}

IL_004a:
	{
		int32_t L_16 = V_0;
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		int32_t L_17;
		L_17 = SceneManager_get_sceneCountInBuildSettings_m414CDE36617596AC75C8E1A03DA65752A09A8944(NULL);
		if ((((int32_t)L_16) < ((int32_t)L_17)))
		{
			goto IL_000e;
		}
	}
	{
		return (bool)0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double TimeUtils_GetCurrentUnixTimestamp_mB2A1F0BB4248A096955C8E54779CEFEF372E4D30 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TimeUtils_t1734A134ACD50BC7666BAF0EC4B861AC90A94259_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_runtime_class_init_inline(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_0;
		L_0 = DateTime_get_Now_m636CB9651A9099D20BA1CF813A0C69637317325C(NULL);
		il2cpp_codegen_runtime_class_init_inline(TimeUtils_t1734A134ACD50BC7666BAF0EC4B861AC90A94259_il2cpp_TypeInfo_var);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_1 = ((TimeUtils_t1734A134ACD50BC7666BAF0EC4B861AC90A94259_StaticFields*)il2cpp_codegen_static_fields_for(TimeUtils_t1734A134ACD50BC7666BAF0EC4B861AC90A94259_il2cpp_TypeInfo_var))->___DEFAULT_DATE_UNIX;
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_2;
		L_2 = DateTime_op_Subtraction_m64D26F5ABFAE6E166A7E567093D025F6C69F0123(L_0, L_1, NULL);
		V_0 = L_2;
		il2cpp_codegen_runtime_class_init_inline(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_il2cpp_TypeInfo_var);
		double L_3;
		L_3 = TimeSpan_get_TotalSeconds_mED686E7CECE6A76A7DC38518698B9199DB8CDEA8((&V_0), NULL);
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double TimeUtils_GetCurrentUnixTimestampWithExtraTime_m1B08805F807963D387D2E5F11117FBC58275B7E2 (int32_t ___0_weeks, int32_t ___1_days, int32_t ___2_hours, int32_t ___3_minutes, int32_t ___4_seconds, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TimeUtils_t1734A134ACD50BC7666BAF0EC4B861AC90A94259_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D V_0;
	memset((&V_0), 0, sizeof(V_0));
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		il2cpp_codegen_runtime_class_init_inline(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_0;
		L_0 = DateTime_get_Now_m636CB9651A9099D20BA1CF813A0C69637317325C(NULL);
		V_0 = L_0;
		int32_t L_1 = ___0_weeks;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_2;
		L_2 = DateTime_AddDays_m9DC06105845A82FEAF697D5E30308ABD49E5721B((&V_0), ((double)((int32_t)il2cpp_codegen_multiply(L_1, 7))), NULL);
		V_0 = L_2;
		int32_t L_3 = ___1_days;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_4;
		L_4 = DateTime_AddDays_m9DC06105845A82FEAF697D5E30308ABD49E5721B((&V_0), ((double)L_3), NULL);
		V_0 = L_4;
		int32_t L_5 = ___2_hours;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_6;
		L_6 = DateTime_AddHours_m99C41C078F2F480BF9965F8A4BAB8C8B75C39C02((&V_0), ((double)L_5), NULL);
		V_0 = L_6;
		int32_t L_7 = ___3_minutes;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_8;
		L_8 = DateTime_AddMinutes_m8B24125F1100B23A1D9D9361A2745577062E0D91((&V_0), ((double)L_7), NULL);
		V_0 = L_8;
		int32_t L_9 = ___4_seconds;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_10;
		L_10 = DateTime_AddSeconds_mC5FE3FB22A1295CA747746ECE48B9D4A4B6B2E81((&V_0), ((double)L_9), NULL);
		V_0 = L_10;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_11 = V_0;
		il2cpp_codegen_runtime_class_init_inline(TimeUtils_t1734A134ACD50BC7666BAF0EC4B861AC90A94259_il2cpp_TypeInfo_var);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_12 = ((TimeUtils_t1734A134ACD50BC7666BAF0EC4B861AC90A94259_StaticFields*)il2cpp_codegen_static_fields_for(TimeUtils_t1734A134ACD50BC7666BAF0EC4B861AC90A94259_il2cpp_TypeInfo_var))->___DEFAULT_DATE_UNIX;
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_13;
		L_13 = DateTime_op_Subtraction_m64D26F5ABFAE6E166A7E567093D025F6C69F0123(L_11, L_12, NULL);
		V_1 = L_13;
		il2cpp_codegen_runtime_class_init_inline(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_il2cpp_TypeInfo_var);
		double L_14;
		L_14 = TimeSpan_get_TotalSeconds_mED686E7CECE6A76A7DC38518698B9199DB8CDEA8((&V_1), NULL);
		return L_14;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double TimeUtils_GetCurrentDayUnixTimestamp_m208EB62E4D5840BA5E9E2F5F2665FAE35011969C (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TimeUtils_t1734A134ACD50BC7666BAF0EC4B861AC90A94259_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D V_0;
	memset((&V_0), 0, sizeof(V_0));
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		il2cpp_codegen_runtime_class_init_inline(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_0;
		L_0 = DateTime_get_Now_m636CB9651A9099D20BA1CF813A0C69637317325C(NULL);
		V_0 = L_0;
		int32_t L_1;
		L_1 = DateTime_get_Hour_m350B2AEB6ED8AAD80F0779C1FD37EEE13952A7F3((&V_0), NULL);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_2;
		L_2 = DateTime_AddHours_m99C41C078F2F480BF9965F8A4BAB8C8B75C39C02((&V_0), ((double)((-L_1))), NULL);
		V_0 = L_2;
		int32_t L_3;
		L_3 = DateTime_get_Minute_m73003491DA85D2C9951ECCF890D9BF6AFFB9E973((&V_0), NULL);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_4;
		L_4 = DateTime_AddMinutes_m8B24125F1100B23A1D9D9361A2745577062E0D91((&V_0), ((double)((-L_3))), NULL);
		V_0 = L_4;
		int32_t L_5;
		L_5 = DateTime_get_Second_mC860BA28DED65249BE9EA46E4898730C7828B3EA((&V_0), NULL);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_6;
		L_6 = DateTime_AddSeconds_mC5FE3FB22A1295CA747746ECE48B9D4A4B6B2E81((&V_0), ((double)((-L_5))), NULL);
		V_0 = L_6;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_7 = V_0;
		il2cpp_codegen_runtime_class_init_inline(TimeUtils_t1734A134ACD50BC7666BAF0EC4B861AC90A94259_il2cpp_TypeInfo_var);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_8 = ((TimeUtils_t1734A134ACD50BC7666BAF0EC4B861AC90A94259_StaticFields*)il2cpp_codegen_static_fields_for(TimeUtils_t1734A134ACD50BC7666BAF0EC4B861AC90A94259_il2cpp_TypeInfo_var))->___DEFAULT_DATE_UNIX;
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_9;
		L_9 = DateTime_op_Subtraction_m64D26F5ABFAE6E166A7E567093D025F6C69F0123(L_7, L_8, NULL);
		V_1 = L_9;
		il2cpp_codegen_runtime_class_init_inline(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_il2cpp_TypeInfo_var);
		double L_10;
		L_10 = TimeSpan_get_TotalSeconds_mED686E7CECE6A76A7DC38518698B9199DB8CDEA8((&V_1), NULL);
		return L_10;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double TimeUtils_GetUnixTimestampFromDateTime_mC7A532282313BF5304463CDDD802A386F1BFBD32 (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___0_target, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D V_0;
	memset((&V_0), 0, sizeof(V_0));
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		il2cpp_codegen_runtime_class_init_inline(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		int32_t L_0;
		L_0 = DateTime_get_Kind_m83D45222D9386873333A178B9AB31AC2B2F2C993((&___0_target), NULL);
		DateTime__ctor_mD89390EF215242275A4E8F78C2C3E8BC3EF6F3C3((&V_0), ((int32_t)1970), 1, 1, 0, 0, 0, L_0, NULL);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_1 = ___0_target;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_2 = V_0;
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_3;
		L_3 = DateTime_op_Subtraction_m64D26F5ABFAE6E166A7E567093D025F6C69F0123(L_1, L_2, NULL);
		V_1 = L_3;
		il2cpp_codegen_runtime_class_init_inline(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_il2cpp_TypeInfo_var);
		double L_4;
		L_4 = TimeSpan_get_TotalSeconds_mED686E7CECE6A76A7DC38518698B9199DB8CDEA8((&V_1), NULL);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D TimeUtils_GetDateTimeFromUnixTime_m0465233881540EFEB5B3941699BECEAB9101AC46 (double ___0_unixTime, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TimeUtils_t1734A134ACD50BC7666BAF0EC4B861AC90A94259_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(TimeUtils_t1734A134ACD50BC7666BAF0EC4B861AC90A94259_il2cpp_TypeInfo_var);
		double L_0 = ___0_unixTime;
		il2cpp_codegen_runtime_class_init_inline(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_1;
		L_1 = DateTime_AddSeconds_mC5FE3FB22A1295CA747746ECE48B9D4A4B6B2E81((&((TimeUtils_t1734A134ACD50BC7666BAF0EC4B861AC90A94259_StaticFields*)il2cpp_codegen_static_fields_for(TimeUtils_t1734A134ACD50BC7666BAF0EC4B861AC90A94259_il2cpp_TypeInfo_var))->___DEFAULT_DATE_UNIX), L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TimeUtils_GetCurrentDateString_mFF5EB0B85D50DECDBF6060B11DB3D474F8E848E4 (String_t* ___0_format, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_runtime_class_init_inline(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_0;
		L_0 = DateTime_get_Now_m636CB9651A9099D20BA1CF813A0C69637317325C(NULL);
		V_0 = L_0;
		String_t* L_1 = ___0_format;
		String_t* L_2;
		L_2 = DateTime_ToString_m6963A84785C320DA776C9FCFFEDAF26C8F1A8D78((&V_0), L_1, NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TimeUtils_GetFormatedTime_mD3038E415C1148A482A9B85535AE9D6AFCC5B233 (float ___0_durationInMinutes, String_t* ___1_formatRule, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4E0BDF099CB5FAA2EDE75EA5A55F14561359873B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7AA4BB7C8FCBC083F3807847E9A9EE809C7E3CB6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8C7F2B3D3E62077E7EF3F03BB193DA9784BB0905);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9EF070BB4C5F488DD81FC57909F733A1C45CA703);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA666314AE63414C47F8A839E0C1EE042AA5576AC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE0EF24960D9E26D5A5C395E3A7D545AE022259AE);
		s_Il2CppMethodInitialized = true;
	}
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	{
		float L_0 = ___0_durationInMinutes;
		il2cpp_codegen_runtime_class_init_inline(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_il2cpp_TypeInfo_var);
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_1;
		L_1 = TimeSpan_FromMinutes_m5748E4C33327BC758C73B6DAE1BDD6BF44711CB5(((double)L_0), NULL);
		V_0 = L_1;
		String_t* L_2 = ___1_formatRule;
		double L_3;
		L_3 = TimeSpan_get_TotalSeconds_mED686E7CECE6A76A7DC38518698B9199DB8CDEA8((&V_0), NULL);
		V_1 = il2cpp_codegen_cast_double_to_int<int32_t>(L_3);
		String_t* L_4;
		L_4 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_1), NULL);
		NullCheck(L_2);
		String_t* L_5;
		L_5 = String_Replace_mABDB7003A1D0AEDCAE9FF85E3DFFFBA752D2A166(L_2, _stringLiteral9EF070BB4C5F488DD81FC57909F733A1C45CA703, L_4, NULL);
		double L_6;
		L_6 = TimeSpan_get_TotalMinutes_mD139AD7A9055F460D2ACC8B0D2BC4A70009E1115((&V_0), NULL);
		V_1 = il2cpp_codegen_cast_double_to_int<int32_t>(L_6);
		String_t* L_7;
		L_7 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_1), NULL);
		NullCheck(L_5);
		String_t* L_8;
		L_8 = String_Replace_mABDB7003A1D0AEDCAE9FF85E3DFFFBA752D2A166(L_5, _stringLiteralE0EF24960D9E26D5A5C395E3A7D545AE022259AE, L_7, NULL);
		double L_9;
		L_9 = TimeSpan_get_TotalHours_m753DFC812CEC8F9214EF5F9839C5B4A4DB0D2883((&V_0), NULL);
		V_1 = il2cpp_codegen_cast_double_to_int<int32_t>(L_9);
		String_t* L_10;
		L_10 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_1), NULL);
		NullCheck(L_8);
		String_t* L_11;
		L_11 = String_Replace_mABDB7003A1D0AEDCAE9FF85E3DFFFBA752D2A166(L_8, _stringLiteralA666314AE63414C47F8A839E0C1EE042AA5576AC, L_10, NULL);
		int32_t L_12;
		L_12 = TimeSpan_get_Seconds_m8CA21613DC31BD025C5D30D41BAD0ED50827578B((&V_0), NULL);
		V_1 = L_12;
		String_t* L_13;
		L_13 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_1), NULL);
		NullCheck(L_11);
		String_t* L_14;
		L_14 = String_Replace_mABDB7003A1D0AEDCAE9FF85E3DFFFBA752D2A166(L_11, _stringLiteral7AA4BB7C8FCBC083F3807847E9A9EE809C7E3CB6, L_13, NULL);
		int32_t L_15;
		L_15 = TimeSpan_get_Minutes_m93E37D01CD6DA2DE5B35609D740D322E270B678F((&V_0), NULL);
		V_1 = L_15;
		String_t* L_16;
		L_16 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_1), NULL);
		NullCheck(L_14);
		String_t* L_17;
		L_17 = String_Replace_mABDB7003A1D0AEDCAE9FF85E3DFFFBA752D2A166(L_14, _stringLiteral8C7F2B3D3E62077E7EF3F03BB193DA9784BB0905, L_16, NULL);
		int32_t L_18;
		L_18 = TimeSpan_get_Hours_m770B4B777A816E051EFDA317C28DA9A4F39D6CFB((&V_0), NULL);
		V_1 = L_18;
		String_t* L_19;
		L_19 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_1), NULL);
		NullCheck(L_17);
		String_t* L_20;
		L_20 = String_Replace_mABDB7003A1D0AEDCAE9FF85E3DFFFBA752D2A166(L_17, _stringLiteral4E0BDF099CB5FAA2EDE75EA5A55F14561359873B, L_19, NULL);
		return L_20;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimeUtils__cctor_m2F175F3E9EF64C583A95DE32D6694C840612CA6E (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TimeUtils_t1734A134ACD50BC7666BAF0EC4B861AC90A94259_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_0;
		memset((&L_0), 0, sizeof(L_0));
		DateTime__ctor_m1F66A4327FE6B127F0F0E83A70CED25DB0DFFB00((&L_0), ((int32_t)1970), 1, 1, 0, 0, 0, NULL);
		((TimeUtils_t1734A134ACD50BC7666BAF0EC4B861AC90A94259_StaticFields*)il2cpp_codegen_static_fields_for(TimeUtils_t1734A134ACD50BC7666BAF0EC4B861AC90A94259_il2cpp_TypeInfo_var))->___DEFAULT_DATE_UNIX = L_0;
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_x;
		__this->___x = L_0;
		float L_1 = ___1_y;
		__this->___y = L_1;
		float L_2 = ___2_z;
		__this->___z = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___zeroVector;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ((Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields*)il2cpp_codegen_static_fields_for(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var))->___identityQuaternion;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___oneVector;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float CoreExtensions_GetWidth_m55E3784EB53BE0192B5EAF5A044F986B37743B40_inline (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___0_rect, const RuntimeMethod* method) 
{
	{
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_0 = ___0_rect;
		NullCheck(L_0);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1;
		L_1 = RectTransform_get_sizeDelta_m822A8493F2035677384F1540A2E9E5ACE63010BB(L_0, NULL);
		float L_2 = L_1.___x;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* CoreExtensions_SetAnchoredPositionX_m97F2E12AA08861E704EE2C935535D4331694549C_inline (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___0_rectTransform, float ___1_x, const RuntimeMethod* method) 
{
	{
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_0 = ___0_rectTransform;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_1 = ___0_rectTransform;
		NullCheck(L_1);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		L_2 = RectTransform_get_anchoredPosition_m38F25A4253B0905BB058BE73DBF43C7172CE0680(L_1, NULL);
		float L_3 = ___1_x;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		L_4 = CoreExtensions_SetX_mDA0794628479534B9EE9E676DB38FE0C33DD5FA3(L_2, L_3, NULL);
		NullCheck(L_0);
		RectTransform_set_anchoredPosition_mF903ACE04F6959B1CD67E2B94FABC0263068F965(L_0, L_4, NULL);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_5 = ___0_rectTransform;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* CoreExtensions_SetAnchoredPositionY_mE704B5BD23B79CD653E3B4986B08C0B4017F78F7_inline (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___0_rectTransform, float ___1_y, const RuntimeMethod* method) 
{
	{
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_0 = ___0_rectTransform;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_1 = ___0_rectTransform;
		NullCheck(L_1);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		L_2 = RectTransform_get_anchoredPosition_m38F25A4253B0905BB058BE73DBF43C7172CE0680(L_1, NULL);
		float L_3 = ___1_y;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		L_4 = CoreExtensions_SetY_mFDB1C9FA6F98B610A0B74513944A019EC9A69F0F(L_2, L_3, NULL);
		NullCheck(L_0);
		RectTransform_set_anchoredPosition_mF903ACE04F6959B1CD67E2B94FABC0263068F965(L_0, L_4, NULL);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_5 = ___0_rectTransform;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Bounds_get_size_m0699A53A55A78B3201D7270D6F338DFA91B6FAD4_inline (Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___m_Extents;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_0, (2.0f), NULL);
		V_0 = L_1;
		goto IL_0014;
	}

IL_0014:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = V_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Bounds_get_center_m5B05F81CB835EB6DD8628FDA24B638F477984DC3_inline (Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___m_Center;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___1_b;
		float L_3 = L_2.___x;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_a;
		float L_5 = L_4.___y;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___1_b;
		float L_7 = L_6.___y;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___0_a;
		float L_9 = L_8.___z;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___1_b;
		float L_11 = L_10.___z;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_add(L_1, L_3)), ((float)il2cpp_codegen_add(L_5, L_7)), ((float)il2cpp_codegen_add(L_9, L_11)), NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___0_x, float ___1_y, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_x;
		__this->___x = L_0;
		float L_1 = ___1_y;
		__this->___y = L_1;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector2Int_get_x_mA2CACB1B6E6B5AD0CCC32B2CD2EDCE3ECEB50576_inline (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___m_X;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2Int_set_x_m291ECF246536852F0B8EE049C4A3768E4999CDC8_inline (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___m_X = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector2Int_get_y_m48454163ECF0B463FB5A16A0C4FC4B14DB0768B3_inline (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___m_Y;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2Int_set_y_mF81881204EEE272BA409728C7EBFDE3A979DDF6A_inline (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___m_Y = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2Int__ctor_mC20D1312133EB8CB63EC11067088B043660F11CE_inline (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* __this, int32_t ___0_x, int32_t ___1_y, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_x;
		__this->___m_X = L_0;
		int32_t L_1 = ___1_y;
		__this->___m_Y = L_1;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline (float ___0_value, const RuntimeMethod* method) 
{
	bool V_0 = false;
	float V_1 = 0.0f;
	bool V_2 = false;
	{
		float L_0 = ___0_value;
		V_0 = (bool)((((float)L_0) < ((float)(0.0f)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		V_1 = (0.0f);
		goto IL_002d;
	}

IL_0015:
	{
		float L_2 = ___0_value;
		V_2 = (bool)((((float)L_2) > ((float)(1.0f)))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0029;
		}
	}
	{
		V_1 = (1.0f);
		goto IL_002d;
	}

IL_0029:
	{
		float L_4 = ___0_value;
		V_1 = L_4;
		goto IL_002d;
	}

IL_002d:
	{
		float L_5 = V_1;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_Clamp_m4DC36EEFDBE5F07C16249DA568023C5ECCFF0E7B_inline (int32_t ___0_value, int32_t ___1_min, int32_t ___2_max, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	int32_t V_2 = 0;
	{
		int32_t L_0 = ___0_value;
		int32_t L_1 = ___1_min;
		V_0 = (bool)((((int32_t)L_0) < ((int32_t)L_1))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_000e;
		}
	}
	{
		int32_t L_3 = ___1_min;
		___0_value = L_3;
		goto IL_0019;
	}

IL_000e:
	{
		int32_t L_4 = ___0_value;
		int32_t L_5 = ___2_max;
		V_1 = (bool)((((int32_t)L_4) > ((int32_t)L_5))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0019;
		}
	}
	{
		int32_t L_7 = ___2_max;
		___0_value = L_7;
	}

IL_0019:
	{
		int32_t L_8 = ___0_value;
		V_2 = L_8;
		goto IL_001d;
	}

IL_001d:
	{
		int32_t L_9 = V_2;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ScrollRect_get_viewport_m85092216DD476F77E78F5CE50F9C4E70063ECCF9_inline (ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E* __this, const RuntimeMethod* method) 
{
	{
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_0 = __this->___m_Viewport;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8_inline (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = __this->___m_Height;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		float L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___upVector;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, float ___1_d, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x;
		float L_2 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___0_a;
		float L_4 = L_3.___y;
		float L_5 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___0_a;
		float L_7 = L_6.___z;
		float L_8 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), ((float)il2cpp_codegen_multiply(L_7, L_8)), NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ScrollRect_get_content_m7878BCA28A96B7FBA02DC466A1ED2C9E191C6996_inline (ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E* __this, const RuntimeMethod* method) 
{
	{
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_0 = __this->___m_Content;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_v, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_v;
		float L_1 = L_0.___x;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___0_v;
		float L_3 = L_2.___y;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_4), L_1, L_3, NULL);
		V_0 = L_4;
		goto IL_0015;
	}

IL_0015:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool ScrollRect_get_horizontal_mDA4358EF29CE64E6B346D6CC5D70E08F00D3D05B_inline (ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___m_Horizontal;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool ScrollRect_get_vertical_m43F2C650302CB71D53A0A373934CA9F9921CC38B_inline (ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___m_Vertical;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Subtraction_m44475FCDAD2DA2F98D78A6625EC2DCDFE8803837_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_a, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_b, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___0_a;
		float L_1 = L_0.___x;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___1_b;
		float L_3 = L_2.___x;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___0_a;
		float L_5 = L_4.___y;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___1_b;
		float L_7 = L_6.___y;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_8), ((float)il2cpp_codegen_subtract(L_1, L_3)), ((float)il2cpp_codegen_subtract(L_5, L_7)), NULL);
		V_0 = L_8;
		goto IL_0023;
	}

IL_0023:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9 = V_0;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_Lerp_m1A36103F7967F653A929556E26E6D052C298C00C_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_a, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_b, float ___2_t, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___2_t;
		float L_1;
		L_1 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(L_0, NULL);
		___2_t = L_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___0_a;
		float L_3 = L_2.___x;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___1_b;
		float L_5 = L_4.___x;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___0_a;
		float L_7 = L_6.___x;
		float L_8 = ___2_t;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9 = ___0_a;
		float L_10 = L_9.___y;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_11 = ___1_b;
		float L_12 = L_11.___y;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_13 = ___0_a;
		float L_14 = L_13.___y;
		float L_15 = ___2_t;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_16;
		memset((&L_16), 0, sizeof(L_16));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_16), ((float)il2cpp_codegen_add(L_3, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_5, L_7)), L_8)))), ((float)il2cpp_codegen_add(L_10, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_12, L_14)), L_15)))), NULL);
		V_0 = L_16;
		goto IL_003d;
	}

IL_003d:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_17 = V_0;
		return L_17;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Lerp_m3A906D0530A94FAABB94F0F905E84D99BE85C3F8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, float ___2_t, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___2_t;
		float L_1;
		L_1 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(L_0, NULL);
		___2_t = L_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___0_a;
		float L_3 = L_2.___x;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___1_b;
		float L_5 = L_4.___x;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___0_a;
		float L_7 = L_6.___x;
		float L_8 = ___2_t;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = ___0_a;
		float L_10 = L_9.___y;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = ___1_b;
		float L_12 = L_11.___y;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = ___0_a;
		float L_14 = L_13.___y;
		float L_15 = ___2_t;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = ___0_a;
		float L_17 = L_16.___z;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = ___1_b;
		float L_19 = L_18.___z;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20 = ___0_a;
		float L_21 = L_20.___z;
		float L_22 = ___2_t;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		memset((&L_23), 0, sizeof(L_23));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_23), ((float)il2cpp_codegen_add(L_3, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_5, L_7)), L_8)))), ((float)il2cpp_codegen_add(L_10, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_12, L_14)), L_15)))), ((float)il2cpp_codegen_add(L_17, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_19, L_21)), L_22)))), NULL);
		V_0 = L_23;
		goto IL_0053;
	}

IL_0053:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24 = V_0;
		return L_24;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___1_b;
		float L_3 = L_2.___x;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_a;
		float L_5 = L_4.___y;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___1_b;
		float L_7 = L_6.___y;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___0_a;
		float L_9 = L_8.___z;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___1_b;
		float L_11 = L_10.___z;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_subtract(L_1, L_3)), ((float)il2cpp_codegen_subtract(L_5, L_7)), ((float)il2cpp_codegen_subtract(L_9, L_11)), NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		float L_0 = __this->___x;
		float L_1 = __this->___x;
		float L_2 = __this->___y;
		float L_3 = __this->___y;
		float L_4 = __this->___z;
		float L_5 = __this->___z;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_6;
		L_6 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_0, L_1)), ((float)il2cpp_codegen_multiply(L_2, L_3)))), ((float)il2cpp_codegen_multiply(L_4, L_5))))));
		V_0 = ((float)L_6);
		goto IL_0034;
	}

IL_0034:
	{
		float L_7 = V_0;
		return L_7;
	}
}
