/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "COCListBaseElement.h"

@class ALPButton;

@interface COCListButtonElement : COCListBaseElement {
@private
	ALPButton* _button;
}
@property(retain, nonatomic) ALPButton* button;
-(void).cxx_destruct;
-(id)initWithDataKeys:(id)dataKeys;
-(void)fillCell:(id)cell dataSource:(id)source;
-(void)_fillCell:(id)cell withObject:(id)object;
-(void)formatCell:(id)cell;
-(id)elementType;
-(Class)cellClass;
@end

