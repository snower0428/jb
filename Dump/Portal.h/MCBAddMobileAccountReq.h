/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "MCBBaseReqVO.h"

@class NSString;

@interface MCBAddMobileAccountReq : MCBBaseReqVO {
@private
	NSString* _mobile;
	NSString* _agreementId;
	NSString* _followerId;
	NSString* _instId;
	NSString* _publicId;
}
@property(retain, nonatomic) NSString* publicId;
@property(retain, nonatomic) NSString* instId;
@property(retain, nonatomic) NSString* followerId;
@property(retain, nonatomic) NSString* agreementId;
@property(retain, nonatomic) NSString* mobile;
-(void).cxx_destruct;
@end
