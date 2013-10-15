//
//  CopyableLabel.m
//  MATSOL
//
//  Created by Santiago Torres Arias on 10/14/13.
//
//

#import "CopyableLabel.h"

@implementation CopyableLabel
- (BOOL)canPerformAction:(SEL)action withSender:(id)sender {
    if(action == @selector(copy:)) {
        return YES;
    }
    else {
        return [super canPerformAction:action withSender:sender];
    }
}

- (BOOL)canBecomeFirstResponder {
    return YES;
}

- (BOOL)becomeFirstResponder {
    if([super becomeFirstResponder]) {
        return YES;
    }
    return NO;
}

- (void)copy:(id)sender {
    UIPasteboard *board = [UIPasteboard generalPasteboard];
    [board setString:self.text];
    [self resignFirstResponder];
}

- (void)touchesEnded:(NSSet *)touches withEvent:(UIEvent *)event {
    if([self isFirstResponder]) {
        UIMenuController *menu = [UIMenuController sharedMenuController];
        [menu setMenuVisible:NO animated:YES];
        [menu update];
        [self resignFirstResponder];
    }
    else if([self becomeFirstResponder]) {
        UIMenuController *menu = [UIMenuController sharedMenuController];
        [menu setTargetRect:self.bounds inView:self];
        [menu setMenuVisible:YES animated:YES];
    }
}
@end