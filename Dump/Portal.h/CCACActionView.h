/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "CCACView.h"

@class UILabel;

@interface CCACActionView : CCACView {
@private
	UILabel* _actionTitle;
}
@property(assign, nonatomic) __weak UILabel* actionTitle;
-(void).cxx_destruct;
-(id)actionLayout:(id)layout;
-(void)refreshTitle:(id)title;
-(void)refreshWithData:(id)data Layout:(id)layout Action:(int)action;
-(id)init;
@end
