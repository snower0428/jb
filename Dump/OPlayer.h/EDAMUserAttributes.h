//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class NSArray, NSString;

@interface EDAMUserAttributes : NSObject <NSCoding>
{
    NSString *__defaultLocationName;
    double __defaultLatitude;
    double __defaultLongitude;
    BOOL __preactivation;
    NSArray *__viewedPromotions;
    NSString *__incomingEmailAddress;
    NSArray *__recentMailedAddresses;
    NSString *__comments;
    long long __dateAgreedToTermsOfService;
    int __maxReferrals;
    int __referralCount;
    NSString *__refererCode;
    long long __sentEmailDate;
    int __sentEmailCount;
    int __dailyEmailLimit;
    long long __emailOptOutDate;
    long long __partnerEmailOptInDate;
    NSString *__preferredLanguage;
    NSString *__preferredCountry;
    BOOL __clipFullPage;
    NSString *__twitterUserName;
    NSString *__twitterId;
    NSString *__groupName;
    NSString *__recognitionLanguage;
    long long __customerProfileId;
    NSString *__referralProof;
    BOOL __defaultLocationName_isset;
    BOOL __defaultLatitude_isset;
    BOOL __defaultLongitude_isset;
    BOOL __preactivation_isset;
    BOOL __viewedPromotions_isset;
    BOOL __incomingEmailAddress_isset;
    BOOL __recentMailedAddresses_isset;
    BOOL __comments_isset;
    BOOL __dateAgreedToTermsOfService_isset;
    BOOL __maxReferrals_isset;
    BOOL __referralCount_isset;
    BOOL __refererCode_isset;
    BOOL __sentEmailDate_isset;
    BOOL __sentEmailCount_isset;
    BOOL __dailyEmailLimit_isset;
    BOOL __emailOptOutDate_isset;
    BOOL __partnerEmailOptInDate_isset;
    BOOL __preferredLanguage_isset;
    BOOL __preferredCountry_isset;
    BOOL __clipFullPage_isset;
    BOOL __twitterUserName_isset;
    BOOL __twitterId_isset;
    BOOL __groupName_isset;
    BOOL __recognitionLanguage_isset;
    BOOL __customerProfileId_isset;
    BOOL __referralProof_isset;
}

- (id)description;
- (void)write:(id)arg1;
- (void)read:(id)arg1;
- (void)unsetReferralProof;
- (BOOL)referralProofIsSet;
@property(retain, nonatomic, getter=referralProof, setter=setReferralProof:) NSString *referralProof; // @dynamic referralProof;
- (void)unsetCustomerProfileId;
- (BOOL)customerProfileIdIsSet;
@property(nonatomic, getter=customerProfileId, setter=setCustomerProfileId:) long long customerProfileId; // @dynamic customerProfileId;
- (void)unsetRecognitionLanguage;
- (BOOL)recognitionLanguageIsSet;
@property(retain, nonatomic, getter=recognitionLanguage, setter=setRecognitionLanguage:) NSString *recognitionLanguage; // @dynamic recognitionLanguage;
- (void)unsetGroupName;
- (BOOL)groupNameIsSet;
@property(retain, nonatomic, getter=groupName, setter=setGroupName:) NSString *groupName; // @dynamic groupName;
- (void)unsetTwitterId;
- (BOOL)twitterIdIsSet;
@property(retain, nonatomic, getter=twitterId, setter=setTwitterId:) NSString *twitterId; // @dynamic twitterId;
- (void)unsetTwitterUserName;
- (BOOL)twitterUserNameIsSet;
@property(retain, nonatomic, getter=twitterUserName, setter=setTwitterUserName:) NSString *twitterUserName; // @dynamic twitterUserName;
- (void)unsetClipFullPage;
- (BOOL)clipFullPageIsSet;
@property(nonatomic, getter=clipFullPage, setter=setClipFullPage:) BOOL clipFullPage; // @dynamic clipFullPage;
- (void)unsetPreferredCountry;
- (BOOL)preferredCountryIsSet;
@property(retain, nonatomic, getter=preferredCountry, setter=setPreferredCountry:) NSString *preferredCountry; // @dynamic preferredCountry;
- (void)unsetPreferredLanguage;
- (BOOL)preferredLanguageIsSet;
@property(retain, nonatomic, getter=preferredLanguage, setter=setPreferredLanguage:) NSString *preferredLanguage; // @dynamic preferredLanguage;
- (void)unsetPartnerEmailOptInDate;
- (BOOL)partnerEmailOptInDateIsSet;
@property(nonatomic, getter=partnerEmailOptInDate, setter=setPartnerEmailOptInDate:) long long partnerEmailOptInDate; // @dynamic partnerEmailOptInDate;
- (void)unsetEmailOptOutDate;
- (BOOL)emailOptOutDateIsSet;
@property(nonatomic, getter=emailOptOutDate, setter=setEmailOptOutDate:) long long emailOptOutDate; // @dynamic emailOptOutDate;
- (void)unsetDailyEmailLimit;
- (BOOL)dailyEmailLimitIsSet;
@property(nonatomic, getter=dailyEmailLimit, setter=setDailyEmailLimit:) int dailyEmailLimit; // @dynamic dailyEmailLimit;
- (void)unsetSentEmailCount;
- (BOOL)sentEmailCountIsSet;
@property(nonatomic, getter=sentEmailCount, setter=setSentEmailCount:) int sentEmailCount; // @dynamic sentEmailCount;
- (void)unsetSentEmailDate;
- (BOOL)sentEmailDateIsSet;
@property(nonatomic, getter=sentEmailDate, setter=setSentEmailDate:) long long sentEmailDate; // @dynamic sentEmailDate;
- (void)unsetRefererCode;
- (BOOL)refererCodeIsSet;
@property(retain, nonatomic, getter=refererCode, setter=setRefererCode:) NSString *refererCode; // @dynamic refererCode;
- (void)unsetReferralCount;
- (BOOL)referralCountIsSet;
@property(nonatomic, getter=referralCount, setter=setReferralCount:) int referralCount; // @dynamic referralCount;
- (void)unsetMaxReferrals;
- (BOOL)maxReferralsIsSet;
@property(nonatomic, getter=maxReferrals, setter=setMaxReferrals:) int maxReferrals; // @dynamic maxReferrals;
- (void)unsetDateAgreedToTermsOfService;
- (BOOL)dateAgreedToTermsOfServiceIsSet;
@property(nonatomic, getter=dateAgreedToTermsOfService, setter=setDateAgreedToTermsOfService:) long long dateAgreedToTermsOfService; // @dynamic dateAgreedToTermsOfService;
- (void)unsetComments;
- (BOOL)commentsIsSet;
@property(retain, nonatomic, getter=comments, setter=setComments:) NSString *comments; // @dynamic comments;
- (void)unsetRecentMailedAddresses;
- (BOOL)recentMailedAddressesIsSet;
@property(retain, nonatomic, getter=recentMailedAddresses, setter=setRecentMailedAddresses:) NSArray *recentMailedAddresses; // @dynamic recentMailedAddresses;
- (void)unsetIncomingEmailAddress;
- (BOOL)incomingEmailAddressIsSet;
@property(retain, nonatomic, getter=incomingEmailAddress, setter=setIncomingEmailAddress:) NSString *incomingEmailAddress; // @dynamic incomingEmailAddress;
- (void)unsetViewedPromotions;
- (BOOL)viewedPromotionsIsSet;
@property(retain, nonatomic, getter=viewedPromotions, setter=setViewedPromotions:) NSArray *viewedPromotions; // @dynamic viewedPromotions;
- (void)unsetPreactivation;
- (BOOL)preactivationIsSet;
@property(nonatomic, getter=preactivation, setter=setPreactivation:) BOOL preactivation; // @dynamic preactivation;
- (void)unsetDefaultLongitude;
- (BOOL)defaultLongitudeIsSet;
@property(nonatomic, getter=defaultLongitude, setter=setDefaultLongitude:) double defaultLongitude; // @dynamic defaultLongitude;
- (void)unsetDefaultLatitude;
- (BOOL)defaultLatitudeIsSet;
@property(nonatomic, getter=defaultLatitude, setter=setDefaultLatitude:) double defaultLatitude; // @dynamic defaultLatitude;
- (void)unsetDefaultLocationName;
- (BOOL)defaultLocationNameIsSet;
@property(retain, nonatomic, getter=defaultLocationName, setter=setDefaultLocationName:) NSString *defaultLocationName; // @dynamic defaultLocationName;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDefaultLocationName:(id)arg1 defaultLatitude:(double)arg2 defaultLongitude:(double)arg3 preactivation:(BOOL)arg4 viewedPromotions:(id)arg5 incomingEmailAddress:(id)arg6 recentMailedAddresses:(id)arg7 comments:(id)arg8 dateAgreedToTermsOfService:(long long)arg9 maxReferrals:(int)arg10 referralCount:(int)arg11 refererCode:(id)arg12 sentEmailDate:(long long)arg13 sentEmailCount:(int)arg14 dailyEmailLimit:(int)arg15 emailOptOutDate:(long long)arg16 partnerEmailOptInDate:(long long)arg17 preferredLanguage:(id)arg18 preferredCountry:(id)arg19 clipFullPage:(BOOL)arg20 twitterUserName:(id)arg21 twitterId:(id)arg22 groupName:(id)arg23 recognitionLanguage:(id)arg24 customerProfileId:(long long)arg25 referralProof:(id)arg26;

@end

