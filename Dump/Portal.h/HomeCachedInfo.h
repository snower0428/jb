/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "NSCoding.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSDictionary;

@interface HomeCachedInfo : XXUnknownSuperclass <NSCoding> {
	NSDictionary* _cachedCouponData;
	NSDictionary* _cachedBillData;
}
@property(retain, nonatomic) NSDictionary* cachedBillData;
@property(retain, nonatomic) NSDictionary* cachedCouponData;
-(void)dealloc;
-(id)initWithCoder:(id)coder;
-(void)encodeWithCoder:(id)coder;
@end
