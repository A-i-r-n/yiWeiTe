//
//  ImageCenterBtn.h
//  ButtonTopImage
//
//  Created by AliThink on 15/9/16.
//  Copyright (c) 2015年 AliThink. All rights reserved.
//

// This code is distributed under the terms and conditions of the MIT license.

// Copyright (c) 2015 AliThink
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in
// all copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
// THE SOFTWARE.


#import <UIKit/UIKit.h>

@interface TwoTextCenterButton : UIButton

@property(strong,nonatomic) UILabel * oneText;
@property(strong,nonatomic) UILabel * twoText;
// Round Image
@property BOOL imageIsRound;
// Image Padding
@property CGFloat padding;
// Spacing between imageview and textlabel
@property CGFloat textSpace;
// Maximum imageview size
@property CGSize imageViewMaxSize;
// Button backgroundHighlighted
@property(nonatomic, strong) UIColor *backgroundHighlightedColor;
// Button backgroundNormal
@property(nonatomic, strong) UIColor *backgroundNormalColor;

-(void)setTitleColor:(UIColor *)color;
-(void)setTipColor:(UIColor*)color;
-(void)setTitle:(NSString *)one;
-(void)setTitle:(NSString* )one two:(NSString *)two;
@end
