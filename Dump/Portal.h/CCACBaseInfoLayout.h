/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "CCACLayout.h"
#import "Portal-Structs.h"


@interface CCACBaseInfoLayout : CCACLayout {
@private
	CGRect _bankLogo;
	CGRect _bankName;
	CGRect _cardDescription;
	CGRect _safePayFlag;
	CGRect _cardAction;
}
@property(assign, nonatomic) CGRect cardAction;
@property(assign, nonatomic) CGRect safePayFlag;
@property(assign, nonatomic) CGRect cardDescription;
@property(assign, nonatomic) CGRect bankName;
@property(assign, nonatomic) CGRect bankLogo;
-(id)initWithData:(id)data lastRect:(CGRect)rect;
@end
