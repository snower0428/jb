/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSArray, NSString;

@interface SMOOtpInfoOld : XXUnknownSuperclass {
@private
	NSString* _hardware;
	NSString* _seed;
	int _interval;
	NSArray* _userList;
	double _timeDiff;
}
@property(retain, nonatomic) NSArray* userList;
@property(assign, nonatomic) int interval;
@property(assign, nonatomic) double timeDiff;
@property(retain, nonatomic) NSString* seed;
@property(retain, nonatomic) NSString* hardware;
+(Class)userListElementClass;
-(void).cxx_destruct;
@end

