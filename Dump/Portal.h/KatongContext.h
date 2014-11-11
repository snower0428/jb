/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSArray, NSMutableArray, NSString, UIViewController;

@interface KatongContext : XXUnknownSuperclass {
	UIViewController* _rootViewController;
	NSMutableArray* _ownedKatongArray;
	NSMutableArray* _supportedKatongArray;
	NSString* _realName;
	NSString* _idCardNO;
	BOOL _hasAuthenticated;
	BOOL _refreshFlag;
}
@property(assign, nonatomic) BOOL refreshFlag;
@property(assign, nonatomic) BOOL hasAuthenticated;
@property(copy, nonatomic) NSString* idCardNO;
@property(copy, nonatomic) NSString* realName;
@property(retain, nonatomic) NSArray* supportedKatongArray;
@property(retain, nonatomic) NSArray* ownedKatongArray;
@property(assign, nonatomic) UIViewController* rootViewController;
+(id)sharedContext;
+(void)destroy;
-(void)dealloc;
-(id)init;
@end

