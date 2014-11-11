//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

__attribute__((visibility("hidden")))
@interface PuzzleFormatPath : NSObject
{
    struct CGSize _imageSize;
    int _nPathCount;
    struct CGPuzzlePath *_pPuzzlePath;
    struct CGPoint _ptOffset;
}

- (id).cxx_construct;
- (BOOL)ReadPuzzleFromatPathFile:(id)arg1;
- (void)SetFormatSize:(struct CGSize)arg1;
- (struct CGSize)GetFormatSize;
- (id)GetFormatBezierPathAtIndex:(int)arg1;
- (id)CreatePathFromPuzzlePath:(struct CGPuzzlePath)arg1;
- (struct CGPoint)checkPoint:(struct CGPoint)arg1 rectMax:(struct CGRect)arg2 resultRect:(struct CGRect)arg3 isCheck:(BOOL)arg4;
- (struct CGRect)GetFormatMaxRectAtIndex:(int)arg1;
- (void)resetFormatOffset:(struct CGPoint)arg1;
- (int)GetFormatPathCount;
- (struct CGPoint)GetPointFromFile:(struct __sFILE *)arg1;
- (struct CGSize)GetSizeFromFile:(struct __sFILE *)arg1;
- (void)dealloc;
- (void)clearMemory;
- (id)init;

@end

