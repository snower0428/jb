/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ALPFundScrollCellProtocol.h"
#import "ALPCell.h"

@class UIImageView, UILabel;

@interface ALPFundCityCell : ALPCell <ALPFundScrollCellProtocol> {
	UILabel* _cityLabel;
	UILabel* _subTitleLabel;
	UIImageView* _cityImageView;
}
-(void).cxx_destruct;
-(float)cellHeight;
-(void)update:(id)update subTitle:(id)title;
-(id)init;
@end

