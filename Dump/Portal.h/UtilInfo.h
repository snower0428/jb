/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString;

@interface UtilInfo : XXUnknownSuperclass {
@private
	NSString* _tid;
	NSString* _sessionId;
	NSString* _version;
}
@property(retain, nonatomic) NSString* version;
@property(retain, nonatomic) NSString* sessionId;
@property(retain, nonatomic) NSString* tid;
+(id)share;
-(void).cxx_destruct;
-(void)cleanTid;
-(void)saveTid:(id)tid ClientKey:(id)key;
-(id)requestInfoWithAction:(id)action Params:(id)params;
-(id)actionInfoWithActionString:(id)actionString;
-(id)netUtilInfo;
-(id)localUtilInfo;
@end
