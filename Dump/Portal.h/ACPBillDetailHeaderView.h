/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "Portal-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class AssetsSingleColumnView;

@interface ACPBillDetailHeaderView : XXUnknownSuperclass {
@private
	AssetsSingleColumnView* _firstLine;
	AssetsSingleColumnView* _secondLine;
	AssetsSingleColumnView* _thirdLine;
}
@property(retain, nonatomic) AssetsSingleColumnView* thirdLine;
@property(retain, nonatomic) AssetsSingleColumnView* secondLine;
@property(retain, nonatomic) AssetsSingleColumnView* firstLine;
-(void).cxx_destruct;
-(void)initUI;
-(id)initWithFrame:(CGRect)frame;
@end
