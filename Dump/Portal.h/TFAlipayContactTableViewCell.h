/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "TFContactBaseTableViewCell.h"
#import "Portal-Structs.h"


@interface TFAlipayContactTableViewCell : TFContactBaseTableViewCell {
}
+(float)calcAccountDetail:(float)detail constraintWidth:(float)width contact:(id)contact;
+(float)cellHeight:(id)height;
-(float)layoutContactDetailInfo:(float)info constraintWidth:(float)width;
-(float)layoutAccountDetail:(float)detail constraintWidth:(float)width tagLabel:(id)label;
-(float)layoutContactName:(float)name constraintWidth:(float)width;
-(void)layoutCell;
-(void)checkDetailSearchMode;
-(void)fillAccountDetail:(id)detail tag:(int)tag;
-(void)fillDetail;
-(void)layoutSubviews;
-(id)initWithFrame:(CGRect)frame;
@end
