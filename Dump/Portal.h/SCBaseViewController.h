/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SCDTViewController.h"
#import "Portal-Structs.h"
#import "UINavigationBarDelegate.h"

@class UINavigationItem;

@interface SCBaseViewController : SCDTViewController <UINavigationBarDelegate> {
@private
	UINavigationItem* _curNavigationItem;
}
@property(readonly, assign, nonatomic) UINavigationItem* curNavigationItem;
-(void).cxx_destruct;
-(void)onBack;
-(void)didReceiveMemoryWarning;
-(void)viewDidLoad;
-(id)initWithNibName:(id)nibName bundle:(id)bundle;
@end

