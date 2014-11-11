/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class TFHomeRecord, UIView, UIImageView, UILabel;

@interface TFHomeCell : XXUnknownSuperclass {
@private
	BOOL _readFlag;
	TFHomeRecord* _record;
	UIView* _iconBG;
	UIImageView* _icon;
	UILabel* _title;
	UILabel* _subTitle;
	UIImageView* _flag;
	UIImageView* _readFlagView;
}
@property(assign, nonatomic) BOOL readFlag;
@property(assign, nonatomic) __weak UIImageView* readFlagView;
@property(assign, nonatomic) __weak UIImageView* flag;
@property(assign, nonatomic) __weak UILabel* subTitle;
@property(assign, nonatomic) __weak UILabel* title;
@property(assign, nonatomic) __weak UIImageView* icon;
@property(assign, nonatomic) __weak UIView* iconBG;
@property(retain, nonatomic) TFHomeRecord* record;
-(void).cxx_destruct;
-(void)hideReadFlag;
-(void)refreshCellWithRecord:(id)record;
-(void)layoutSubviews;
-(id)initWithStyle:(int)style reuseIdentifier:(id)identifier;
@end
