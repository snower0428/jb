/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class LBSLocation, NSString;

@interface LBSBindingUserInfo : XXUnknownSuperclass {
@private
	NSString* _userId;
	NSString* _name;
	NSString* _alipayAccount;
	NSString* _avatarURL;
	LBSLocation* _location;
	int _distance;
}
@property(assign, nonatomic) int distance;
@property(retain, nonatomic) LBSLocation* location;
@property(retain, nonatomic) NSString* avatarURL;
@property(retain, nonatomic) NSString* alipayAccount;
@property(retain, nonatomic) NSString* name;
@property(retain, nonatomic) NSString* userId;
-(void).cxx_destruct;
@end

