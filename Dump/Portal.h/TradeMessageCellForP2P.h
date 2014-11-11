/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "TradeMessageCell.h"

@class PPChatMediaButton, UILabel, UIView;

@interface TradeMessageCellForP2P : TradeMessageCell {
@private
	UILabel* _titleLabel;
	UILabel* _amountLabel;
	UILabel* _dateLabel;
	UILabel* _statusLabel;
	PPChatMediaButton* _animButton;
	PPChatMediaButton* _voiceButton;
	UIView* _mediaLine;
}
@property(retain, nonatomic) UIView* mediaLine;
@property(retain, nonatomic) PPChatMediaButton* voiceButton;
@property(retain, nonatomic) PPChatMediaButton* animButton;
@property(retain, nonatomic) UILabel* statusLabel;
@property(retain, nonatomic) UILabel* dateLabel;
@property(retain, nonatomic) UILabel* amountLabel;
@property(retain, nonatomic) UILabel* titleLabel;
+(float)cellHeightForData:(id)data ofMessage:(id)message;
-(void).cxx_destruct;
-(void)layoutSubviews;
-(id)backgroundImageHilighted;
-(id)backgroundImage;
-(id)iconPlaceholder;
-(void)loadData:(id)data;
-(id)initWithStyle:(int)style reuseIdentifier:(id)identifier;
@end

