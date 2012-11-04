/* --------------------------------------------------------------------------------
 #
 #	4DPlugin.h
 #	source generated by 4D Plugin Wizard
 #	Project : Address Book
 #	author : miyako
 #	2012/11/05
 #
 # --------------------------------------------------------------------------------*/



// --- Application
void AB_TERMINATE(sLONG_PTR *pResult, PackagePtr pParams);
void AB_LAUNCH(sLONG_PTR *pResult, PackagePtr pParams);

// --- People
void AB_Create_person(sLONG_PTR *pResult, PackagePtr pParams);
void AB_Set_person_property(sLONG_PTR *pResult, PackagePtr pParams);
void AB_Get_person_property(sLONG_PTR *pResult, PackagePtr pParams);
void AB_Remove_person(sLONG_PTR *pResult, PackagePtr pParams);
void AB_Set_person_properties(sLONG_PTR *pResult, PackagePtr pParams);
void AB_Get_person_properties(sLONG_PTR *pResult, PackagePtr pParams);
void AB_Set_person_image(sLONG_PTR *pResult, PackagePtr pParams);
void AB_Get_person_image(sLONG_PTR *pResult, PackagePtr pParams);
void AB_Person_get_vcard(sLONG_PTR *pResult, PackagePtr pParams);
void AB_QUERY_PEOPLE(sLONG_PTR *pResult, PackagePtr pParams);
void AB_Create_person_with_vcard(sLONG_PTR *pResult, PackagePtr pParams);
void AB_Set_person_flags(sLONG_PTR *pResult, PackagePtr pParams);
void AB_Get_person_flags(sLONG_PTR *pResult, PackagePtr pParams);
void AB_Get_me(sLONG_PTR *pResult, PackagePtr pParams);
void AB_Set_me(sLONG_PTR *pResult, PackagePtr pParams);

// --- Group
void AB_Create_group(sLONG_PTR *pResult, PackagePtr pParams);
void AB_Set_group_name(sLONG_PTR *pResult, PackagePtr pParams);
void AB_Get_group_name(sLONG_PTR *pResult, PackagePtr pParams);
void AB_Remove_group(sLONG_PTR *pResult, PackagePtr pParams);
void AB_Remove_person_from_group(sLONG_PTR *pResult, PackagePtr pParams);
void AB_Add_group_to_group(sLONG_PTR *pResult, PackagePtr pParams);
void AB_Add_person_to_group(sLONG_PTR *pResult, PackagePtr pParams);
void AB_Remove_group_from_group(sLONG_PTR *pResult, PackagePtr pParams);
void AB_Get_people_in_group(sLONG_PTR *pResult, PackagePtr pParams);
void AB_Get_groups_in_group(sLONG_PTR *pResult, PackagePtr pParams);

// --- Type Cast
void AB_Make_date(sLONG_PTR *pResult, PackagePtr pParams);
void AB_GET_DATE(sLONG_PTR *pResult, PackagePtr pParams);
void AB_Make_address(sLONG_PTR *pResult, PackagePtr pParams);
void AB_GET_ADDRESS(sLONG_PTR *pResult, PackagePtr pParams);

// --- Address Book
void AB_GET_LIST(sLONG_PTR *pResult, PackagePtr pParams);

// --- Utilities
void AB_Get_localized_string(sLONG_PTR *pResult, PackagePtr pParams);
void AB_Get_default_country_code(sLONG_PTR *pResult, PackagePtr pParams);
void AB_Get_default_name_ordering(sLONG_PTR *pResult, PackagePtr pParams);

// --- Notification
void AB_Set_notification_method(sLONG_PTR *pResult, PackagePtr pParams);
void AB_Get_notification_method(sLONG_PTR *pResult, PackagePtr pParams);

// --- Group II
void AB_Get_parent_groups(sLONG_PTR *pResult, PackagePtr pParams);

// --- Special
void AB_LIST_GROUP_PEOPLE(sLONG_PTR *pResult, PackagePtr pParams);
void AB_FIND_PEOPLE(sLONG_PTR *pResult, PackagePtr pParams);
void AB_GET_GROUP_GROUPS(sLONG_PTR *pResult, PackagePtr pParams);
void AB_GET_PERSON_GROUPS(sLONG_PTR *pResult, PackagePtr pParams);
