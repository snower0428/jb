/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString;

@interface PFJSONCacheItem : XXUnknownSuperclass {
	NSString* json;
	NSString* hashValue;
}
@property(readonly, assign, nonatomic) NSString* hashValue;
@property(readonly, assign, nonatomic) NSString* json;
+(id)cacheFromObject:(id)object;
-(void)dealloc;
-(BOOL)isEqualTo:(id)to;
-(id)initWithObject:(id)object;
@end

