/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString;

@interface BaseResp : XXUnknownSuperclass {
@private
	int errCode;
	NSString* errStr;
	int type;
}
@property(assign, nonatomic) int type;
@property(retain, nonatomic) NSString* errStr;
@property(assign, nonatomic) int errCode;
-(void)dealloc;
-(id)init;
@end
