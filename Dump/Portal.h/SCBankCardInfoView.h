/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "Portal-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class MSCardInfo;

@interface SCBankCardInfoView : XXUnknownSuperclass {
@private
	MSCardInfo* _bankCardInfo;
	float _line1_y;
	float _line2_y;
}
@property(assign, nonatomic) float line2_y;
@property(assign, nonatomic) float line1_y;
@property(retain, nonatomic) MSCardInfo* bankCardInfo;
-(void).cxx_destruct;
-(id)initWithFrame:(CGRect)frame;
@end

