/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class UITextField, APTextField, UILabel, UIButton;

@interface MutipleGatheringTableViewCell2 : XXUnknownSuperclass {
	id _userData;
	id _delegate;
	APTextField* _accountTextField;
	UIButton* _accountButton;
	APTextField* _amountTextField;
	UILabel* _unitsLabel;
	UIButton* _deleteButton;
	UILabel* _indexLabel;
@private
	id userData;
}
@property(readonly, assign, nonatomic) UILabel* indexLabel;
@property(readonly, assign, nonatomic) UIButton* deleteButton;
@property(readonly, assign, nonatomic) UITextField* amountTextField;
@property(readonly, assign, nonatomic) UITextField* accountTextField;
@property(assign, nonatomic) id delegate;
@property(assign, nonatomic) id userData;
-(void)layoutIfNeeded;
-(void)backgroundButtonDidClick:(id)backgroundButton;
-(void)deleteButtonClicked:(id)clicked;
-(id)initWithReuseIdentifier:(id)reuseIdentifier;
@end
