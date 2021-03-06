//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TTTableLinkedItem.h"

@class TTStyledText;

@interface TTTableStyledTextItem : TTTableLinkedItem
{
    TTStyledText *_text;
    struct UIEdgeInsets _margin;
    struct UIEdgeInsets _padding;
}

+ (id)itemWithText:(id)arg1 URL:(id)arg2 accessoryURL:(id)arg3;
+ (id)itemWithText:(id)arg1 URL:(id)arg2;
+ (id)itemWithText:(id)arg1;
@property(nonatomic) struct UIEdgeInsets padding; // @synthesize padding=_padding;
@property(nonatomic) struct UIEdgeInsets margin; // @synthesize margin=_margin;
@property(retain, nonatomic) TTStyledText *text; // @synthesize text=_text;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (id)init;

@end

