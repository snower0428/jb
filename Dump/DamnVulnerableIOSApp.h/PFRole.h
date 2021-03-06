/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "PFObject.h"
#import "PFSubclassing.h"

@class NSString, PFRelation;

@interface PFRole : PFObject <PFSubclassing> {
}
@property(readonly, assign, nonatomic) PFRelation* roles;
@property(readonly, assign, nonatomic) PFRelation* users;
@property(copy, nonatomic) NSString* name;
+(id)parseClassName;
+(void)validateClassName:(id)name;
+(id)query;
+(id)roleWithName:(id)name acl:(id)acl;
+(id)roleWithName:(id)name;
-(id)saveAsync;
-(void)setObject:(id)object forKey:(id)key;
-(id)initWithName:(id)name acl:(id)acl;
-(id)initWithName:(id)name;
@end

