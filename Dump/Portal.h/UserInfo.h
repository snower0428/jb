/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "CDVPlugin.h"

@class NSString;

@interface UserInfo : CDVPlugin {
	NSString* callbackID;
}
@property(copy, nonatomic) NSString* callbackID;
-(void)dealloc;
-(id)formatValue:(id)value;
-(void)didInfo:(id)info withDict:(id)dict;
-(void)getInfo:(id)info withDict:(id)dict;
@end
