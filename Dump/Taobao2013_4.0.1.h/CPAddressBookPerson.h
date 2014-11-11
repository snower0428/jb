//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate, NSMutableDictionary, NSString;

@interface CPAddressBookPerson : NSObject
{
    NSString *_firstName;
    NSString *_lastName;
    NSString *_middleName;
    NSString *_prefix;
    NSString *_suffix;
    NSString *_nickName;
    NSString *_organization;
    NSString *_jobTitle;
    NSString *_department;
    NSString *_email;
    NSDate *_birthDay;
    NSString *_note;
    NSDate *_createDate;
    NSDate *_modaifcationDate;
    NSMutableDictionary *_phoneNumDic;
    NSString *_mainPhoneNum;
    NSString *_firstnamePhonetic;
    NSString *_middlenamePhonetic;
    NSString *_lastnamePhonetic;
    int _recordId;
    BOOL _PY_index;
    NSString *_firstNamePinyin;
    NSString *_middleNamePinyin;
    NSString *_laseNamePinyin;
    void *_ABPerson;
    NSString *_mobilePhoneNum;
}

+ (id)personWithABPerson:(void *)arg1;
+ (id)createPersonWithName:(id)arg1 andTel:(id)arg2;
@property(retain, nonatomic) NSString *lastNamePinyin; // @synthesize lastNamePinyin=_laseNamePinyin;
@property(retain, nonatomic) NSString *middleNamePinyin; // @synthesize middleNamePinyin=_middleNamePinyin;
@property(retain, nonatomic) NSString *firstNamePinyin; // @synthesize firstNamePinyin=_firstNamePinyin;
@property(nonatomic) BOOL PY_index; // @synthesize PY_index=_PY_index;
@property(nonatomic) void *ABPerson; // @synthesize ABPerson=_ABPerson;
@property(nonatomic) int recordId; // @synthesize recordId=_recordId;
@property(retain, nonatomic) NSMutableDictionary *phoneNumDic; // @synthesize phoneNumDic=_phoneNumDic;
@property(retain, nonatomic) NSString *mobilePhoneNum; // @synthesize mobilePhoneNum=_mobilePhoneNum;
@property(retain, nonatomic) NSDate *modaifcationDate; // @synthesize modaifcationDate=_modaifcationDate;
@property(retain, nonatomic) NSDate *createDate; // @synthesize createDate=_createDate;
@property(retain, nonatomic) NSString *note; // @synthesize note=_note;
@property(retain, nonatomic) NSDate *birthDay; // @synthesize birthDay=_birthDay;
@property(retain, nonatomic) NSString *email; // @synthesize email=_email;
@property(retain, nonatomic) NSString *department; // @synthesize department=_department;
@property(retain, nonatomic) NSString *jobTitle; // @synthesize jobTitle=_jobTitle;
@property(retain, nonatomic) NSString *organization; // @synthesize organization=_organization;
@property(retain, nonatomic) NSString *nickName; // @synthesize nickName=_nickName;
@property(retain, nonatomic) NSString *suffix; // @synthesize suffix=_suffix;
@property(retain, nonatomic) NSString *prefix; // @synthesize prefix=_prefix;
@property(retain, nonatomic) NSString *lastName; // @synthesize lastName=_lastName;
@property(retain, nonatomic) NSString *middleName; // @synthesize middleName=_middleName;
@property(retain, nonatomic) NSString *firstName; // @synthesize firstName=_firstName;
- (void).cxx_destruct;
- (void)initPyIndex;
- (void)initWithABPerson:(void *)arg1;
- (void)setMainPhoneNum:(id)arg1;
- (id)init;

@end
