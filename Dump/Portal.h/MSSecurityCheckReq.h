/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString, MSTid;

@interface MSSecurityCheckReq : XXUnknownSuperclass {
@private
	BOOL _setGesture;
	NSString* _logonId;
	MSTid* _tid;
}
@property(assign, nonatomic) BOOL setGesture;
@property(retain, nonatomic) MSTid* tid;
@property(retain, nonatomic) NSString* logonId;
-(void).cxx_destruct;
@end
