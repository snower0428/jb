/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class PFObject, NSString;

@interface PFRelation : XXUnknownSuperclass {
	PFObject* parent;
	NSString* key;
	NSString* _targetClass;
}
@property(retain, nonatomic) NSString* targetClass;
+(id)relationWithTargetClass:(id)targetClass;
+(id)relationForObject:(id)object forKey:(id)key;
-(void).cxx_destruct;
-(id)encodeIntoDictionary;
-(void)removeObject:(id)object;
-(void)addObject:(id)object;
-(id)query;
-(id)description;
-(void)ensureParentIs:(id)is andKeyIs:(id)is2;
-(id)initWithTargetClass:(id)targetClass;
-(id)initWithParent:(id)parent key:(id)key;
@end

