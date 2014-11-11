/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "Message.h"
#import "NSCoding.h"

@class NSArray;

@interface NewsMessage : Message <NSCoding> {
@private
	NSArray* _articles;
}
@property(retain, nonatomic) NSArray* articles;
-(void).cxx_destruct;
-(id)titleForHome;
-(id)subItemForIndex:(int)index;
-(id)initWithRpcMessageEntry:(id)rpcMessageEntry;
-(void)encodeWithCoder:(id)coder;
-(id)initWithCoder:(id)coder;
@end
