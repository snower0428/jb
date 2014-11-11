/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "NSObject.h"
#import "BLLWCell.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class BLLWData, BLLWStyle, BLLWLayout;
@protocol BLLWCellDelegate;

@protocol BLLWCell <NSObject>
@property(retain, nonatomic) BLLWLayout* layout;
@property(retain, nonatomic) BLLWStyle* style;
@property(retain, nonatomic) BLLWData* data;
-(void)refreshWithData:(id)data Style:(id)style Layout:(id)layout;
@end

@interface BLLWCell : XXUnknownSuperclass <BLLWCell> {
@private
	BLLWData* _data;
	BLLWStyle* _style;
	BLLWLayout* _layout;
	id<BLLWCellDelegate> _delegate;
}
@property(assign, nonatomic) id<BLLWCellDelegate> delegate;
@property(retain, nonatomic) BLLWLayout* layout;
@property(retain, nonatomic) BLLWStyle* style;
@property(retain, nonatomic) BLLWData* data;
+(id)identifierString;
-(void).cxx_destruct;
-(void)click;
-(void)clearCell;
-(void)refreshWithData:(id)data Style:(id)style Layout:(id)layout;
-(id)initWithStyle:(int)style reuseIdentifier:(id)identifier;
-(void)showView:(id)view;
@end
