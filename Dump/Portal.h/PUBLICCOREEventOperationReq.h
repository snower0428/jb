/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "PUBLICCOREToString.h"

@class NSString;

@interface PUBLICCOREEventOperationReq : PUBLICCOREToString {
@private
	NSString* _userId;
	NSString* _actionType;
	NSString* _actionParam;
	NSString* _publicId;
	NSString* _agreementId;
	NSString* _thirdAccountId;
	NSString* _appVersion;
}
@property(retain, nonatomic) NSString* appVersion;
@property(retain, nonatomic) NSString* thirdAccountId;
@property(retain, nonatomic) NSString* agreementId;
@property(retain, nonatomic) NSString* publicId;
@property(retain, nonatomic) NSString* actionParam;
@property(retain, nonatomic) NSString* actionType;
@property(retain, nonatomic) NSString* userId;
-(void).cxx_destruct;
@end

