//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSTextView.h"

@interface PBXKeyEquivalentEditor : NSTextView
{
}

- (void)endEditingKeyEquivalent;
- (void)deleteSelectedKeyEquivalent:(id)arg1;
- (void)addKeyEquivalent:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)resetCursorRects;
- (BOOL)application:(id)arg1 shouldSendEvent:(id)arg2;
- (void)beginEditingKeyEquivalentForCell:(id)arg1;
- (void)_setSelectionFromEvent:(id)arg1;
- (void)_syncDisplay;

@end
