//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface ContactData : NSObject
{
}

+ (BOOL)searchResult:(id)arg1 searchText:(id)arg2;
+ (id)getContactsNameByPhoneNumberAndLabel:(id)arg1 withLabel:(id)arg2;
+ (id)equalContactByAddressBookContacts:(id)arg1 withPhone:(id)arg2 withLabel:(id)arg3 PhoneOrLabel:(BOOL)arg4 withFavorite:(BOOL)arg5;
+ (BOOL)doesStringContain:(id)arg1 Withstr:(id)arg2;
+ (id)getPhoneNumberFomat:(id)arg1;
+ (id)getPhoneLabelFromDic:(id)arg1;
+ (id)getPhoneNameFromDic:(id)arg1;
+ (id)getPhoneNumberFromDic:(id)arg1;
+ (id)getPhoneNumberAndPhoneLabelArrayFromABRecodID:(void *)arg1 withABMultiValueIdentifier:(int)arg2;
+ (id)getPhoneNumberAndPhoneLabelArray:(id)arg1;
+ (id)byPhoneNumberlToGetContact:(id)arg1 withLabel:(id)arg2;
+ (id)byNameToGetContact:(id)arg1;
+ (id)byPhoneNumberAndNameToGetContact:(id)arg1 withPhone:(id)arg2;
+ (id)byPhoneNumberAndLabelToGetContact:(id)arg1 withLabel:(id)arg2;
+ (id)hasContactsExistInAddressBookByPhone:(id)arg1;
+ (id)contactsArray;

@end

