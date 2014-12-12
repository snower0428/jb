/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "PFMultipartPart.h"

@class NSMutableData;

@protocol PFMultipartPart
@property(assign, nonatomic) unsigned offset;
@property(readonly, assign, nonatomic) unsigned size;
-(int)bufferPart:(const char**)part atIndex:(int)index;
@end

@interface PFMultipartPart : XXUnknownSuperclass <PFMultipartPart> {
	unsigned offset;
	NSMutableData* data;
}
@property(readonly, assign, nonatomic) unsigned size;
@property(retain, nonatomic) NSMutableData* data;
@property(assign, nonatomic) unsigned offset;
-(void).cxx_destruct;
-(int)bufferPart:(const char**)part atIndex:(int)index;
-(void)appendData:(id)data;
@end
