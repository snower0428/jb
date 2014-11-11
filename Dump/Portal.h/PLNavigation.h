/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "CDVPlugin.h"

@class NSString;

@interface PLNavigation : CDVPlugin {
	NSString* callbackID;
}
@property(copy, nonatomic) NSString* callbackID;
-(void)dealloc;
-(void)setLeftItemAction:(id)action withDict:(id)dict;
-(void)setLeftTitle:(id)title withDict:(id)dict;
-(void)setLeftIcon:(id)icon withDict:(id)dict;
-(void)setRightItemAction:(id)action withDict:(id)dict;
-(void)setCenterItemAction:(id)action withDict:(id)dict;
-(void)setRightItemTitle:(id)title withDict:(id)dict;
-(void)setCenterItemTitle:(id)title withDict:(id)dict;
-(void)setRightTitle:(id)title withDict:(id)dict;
-(void)setRightIcon:(id)icon withDict:(id)dict;
-(void)setSlaverightTitle:(id)title withDict:(id)dict;
-(void)setSlaverightIcon:(id)icon withDict:(id)dict;
-(void)setDefaultBackFunction:(id)function withDict:(id)dict;
-(void)popToRoot:(id)root withDict:(id)dict;
-(void)popWindow:(id)window withDict:(id)dict;
-(void)reportError:(id)error;
-(void)pushWindow:(id)window withDict:(id)dict;
@end

