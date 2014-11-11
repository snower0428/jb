/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "UITableViewDelegate.h"
#import "Portal-Structs.h"
#import "UITextFieldDelegate.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "UITableViewDataSource.h"

@class UIImageView, NSArray, UITableView, UITextField;

@interface CCBMailInputTextField : XXUnknownSuperclass <UITableViewDelegate, UITableViewDataSource, UITextFieldDelegate> {
@private
	NSArray* _autoprompArray;
	UIImageView* _tableViewMask;
	UITableView* _autoPrompTableView;
	UITextField* _mailInputTextField;
}
@property(retain, nonatomic) UITextField* mailInputTextField;
@property(retain, nonatomic) UITableView* autoPrompTableView;
-(void).cxx_destruct;
-(id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;
-(int)tableView:(id)view numberOfRowsInSection:(int)section;
-(void)editingChanged:(id)changed;
-(id)initWithFrame:(CGRect)frame;
@end

