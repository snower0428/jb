/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "Portal-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class TTTAttributedLabel, UIImageView;

@interface TFToAccountSucceedMemoView : XXUnknownSuperclass {
@private
	UIImageView* _flagImageView;
	TTTAttributedLabel* _memoLabel;
}
@property(retain, nonatomic) TTTAttributedLabel* memoLabel;
@property(retain, nonatomic) UIImageView* flagImageView;
-(void).cxx_destruct;
-(void)refreshWithMemo:(id)memo;
-(id)initWithFrame:(CGRect)frame;
@end

