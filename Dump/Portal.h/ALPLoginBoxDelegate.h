/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "NSObject.h"


@protocol ALPLoginBoxDelegate <NSObject>
-(void)loginBox:(id)box didDeleteHistoryItemAtIndex:(unsigned)index;
-(void)loginBox:(id)box didSelectHistoryItemAtIndex:(unsigned)index;
@optional
-(void)loginBoxDidChangeHeight:(id)loginBox;
-(void)didExpandButtonClicked:(id)clicked;
@end
