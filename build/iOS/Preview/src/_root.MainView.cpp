// This file was generated based on /Users/rolf.valstad/Desktop/test-ios/build/iOS/Preview/cache/ux11/MainView.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.MainView.h>
#include <_root.testios_bundle.h>
#include <_root.testios_FuseControlsTextControl_Value_Property.h>
#include <_root.testios_FuseControlsWebView_Url_Property.h>
#include <_root.testios_FuseDrawingImageFill_Url_Property.h>
#include <_root.testios_FuseElementsElement_Opacity_Property.h>
#include <_root.testios_FuseTriggersActionsDebugAction_Message_Property.h>
#include <_root.testios_FuseTriggersWhileBool_Value_Property.h>
#include <Fuse.Animations.Animator.h>
#include <Fuse.Animations.Change-1.h>
#include <Fuse.Animations.Easing.h>
#include <Fuse.Animations.IResizeMode.h>
#include <Fuse.Animations.Move.h>
#include <Fuse.Animations.Scale.h>
#include <Fuse.Animations.TrackAnimator.h>
#include <Fuse.Animations.TransformAnimator-1.h>
#include <Fuse.Binding.h>
#include <Fuse.Controls.Button.h>
#include <Fuse.Controls.Circle.h>
#include <Fuse.Controls.Control.h>
#include <Fuse.Controls.DockPanel.h>
#include <Fuse.Controls.Image.h>
#include <Fuse.Controls.NativeViewHost.h>
#include <Fuse.Controls.Panel.h>
#include <Fuse.Controls.Rectangle.h>
#include <Fuse.Controls.Shape.h>
#include <Fuse.Controls.StackPanel.h>
#include <Fuse.Controls.StatusBarBackground.h>
#include <Fuse.Controls.Text.h>
#include <Fuse.Controls.TextAlignment.h>
#include <Fuse.Controls.TextControl.h>
#include <Fuse.Controls.WebView.h>
#include <Fuse.Drawing.Brush.h>
#include <Fuse.Drawing.BrushConverter.h>
#include <Fuse.Drawing.Brushes.h>
#include <Fuse.Drawing.Colors.h>
#include <Fuse.Drawing.ImageFill.h>
#include <Fuse.Drawing.StaticSolidColor.h>
#include <Fuse.Drawing.Stroke.h>
#include <Fuse.Elements.Alignment.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Elements.ITransformOrigin.h>
#include <Fuse.Elements.TransformOrigins.h>
#include <Fuse.Elements.TranslationModes.h>
#include <Fuse.FileSystem.FileSystemModule.h>
#include <Fuse.Font.h>
#include <Fuse.Gestures.Clicked.h>
#include <Fuse.Gestures.ClickedHandler.h>
#include <Fuse.Gestures.WhilePressed.h>
#include <Fuse.iOS.StatusBarConfig.h>
#include <Fuse.IScalingMode.h>
#include <Fuse.ITranslationMode.h>
#include <Fuse.Layer.h>
#include <Fuse.Layouts.Dock.h>
#include <Fuse.Node.h>
#include <Fuse.NodeGroupBase.h>
#include <Fuse.Platform.StatusBarStyle.h>
#include <Fuse.Reactive.DataBinding-1.h>
#include <Fuse.Reactive.EventBinding.h>
#include <Fuse.Reactive.FuseJS.DiagnosticsImplModule.h>
#include <Fuse.Reactive.FuseJS.Http.h>
#include <Fuse.Reactive.FuseJS.TimerModule.h>
#include <Fuse.Reactive.JavaScript.h>
#include <Fuse.Resources.FileImageSource.h>
#include <Fuse.Resources.MemoryPolicy.h>
#include <Fuse.ScalingModes.h>
#include <Fuse.Storage.StorageModule.h>
#include <Fuse.Translation.h>
#include <Fuse.TranslationModes.h>
#include <Fuse.Triggers.Actions.DebugAction.h>
#include <Fuse.Triggers.Actions.EvaluateJS.h>
#include <Fuse.Triggers.Actions.GiveFocus.h>
#include <Fuse.Triggers.Actions.JSEventHandler.h>
#include <Fuse.Triggers.Actions.TriggerAction.h>
#include <Fuse.Triggers.AddingAnimation.h>
#include <Fuse.Triggers.BusyTaskModule.h>
#include <Fuse.Triggers.IScrolledLength.h>
#include <Fuse.Triggers.IScrolledLengths.h>
#include <Fuse.Triggers.LayoutTransition.h>
#include <Fuse.Triggers.PageLoaded.h>
#include <Fuse.Triggers.Trigger.h>
#include <Fuse.Triggers.WhileBool.h>
#include <Fuse.Triggers.WhileFalse.h>
#include <Fuse.Triggers.WhileKeyboardVisible.h>
#include <Fuse.Triggers.WhileTrue.h>
#include <Fuse.Visual.h>
#include <Fuse.WebSocket.WebSocketClientModule.h>
#include <FuseJS.Base64.h>
#include <FuseJS.Bundle.h>
#include <FuseJS.Environment.h>
#include <FuseJS.FileReaderImpl.h>
#include <FuseJS.Globals.h>
#include <FuseJS.Lifecycle.h>
#include <FuseJS.UserEvents.h>
#include <Polyfills.Window.WindowModule.h>
#include <Uno.Bool.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Double.h>
#include <Uno.Float.h>
#include <Uno.Float4.h>
#include <Uno.Int.h>
#include <Uno.IO.BundleFile.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.UX.BundleFileSource.h>
#include <Uno.UX.FileSource.h>
#include <Uno.UX.NameTable.h>
#include <Uno.UX.Property-1.h>
#include <Uno.UX.Resource.h>
#include <Uno.UX.Selector.h>
#include <Uno.UX.Size.h>
#include <Uno.UX.Unit.h>
static uString* STRINGS[97];
static uType* TYPES[13];

namespace g{

// public partial sealed class MainView :2
// {
// static MainView() :22
static void MainView__cctor_1_fn(uType* __type)
{
    MainView::__g_static_nametable1_ = uArray::Init<uString*>(::TYPES[0/*string[]*/], 2, ::STRINGS[0/*"nvh"*/], ::STRINGS[1/*"webView"*/]);
    MainView::__selector0_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[2/*"Url"*/]);
    MainView::__selector1_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[3/*"Opacity"*/]);
    MainView::__selector2_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[4/*"Value"*/]);
    MainView::__selector3_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[5/*"Message"*/]);
    MainView::__selector4_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[0/*"nvh"*/]);
    MainView::__selector5_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[1/*"webView"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::Linear(), ::STRINGS[6/*"Linear"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::QuadraticIn(), ::STRINGS[7/*"QuadraticIn"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::QuadraticOut(), ::STRINGS[8/*"QuadraticOut"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::QuadraticInOut(), ::STRINGS[9/*"QuadraticIn...*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::CubicIn(), ::STRINGS[10/*"CubicIn"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::CubicOut(), ::STRINGS[11/*"CubicOut"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::CubicInOut(), ::STRINGS[12/*"CubicInOut"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::QuarticIn(), ::STRINGS[13/*"QuarticIn"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::QuarticOut(), ::STRINGS[14/*"QuarticOut"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::QuarticInOut(), ::STRINGS[15/*"QuarticInOut"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::QuinticIn(), ::STRINGS[16/*"QuinticIn"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::QuinticOut(), ::STRINGS[17/*"QuinticOut"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::QuinticInOut(), ::STRINGS[18/*"QuinticInOut"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::SinusoidalIn(), ::STRINGS[19/*"SinusoidalIn"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::SinusoidalOut(), ::STRINGS[20/*"SinusoidalOut"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::SinusoidalInOut(), ::STRINGS[21/*"SinusoidalI...*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::ExponentialIn(), ::STRINGS[22/*"ExponentialIn"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::ExponentialOut(), ::STRINGS[23/*"Exponential...*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::ExponentialInOut(), ::STRINGS[24/*"Exponential...*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::CircularIn(), ::STRINGS[25/*"CircularIn"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::CircularOut(), ::STRINGS[26/*"CircularOut"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::CircularInOut(), ::STRINGS[27/*"CircularInOut"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::ElasticIn(), ::STRINGS[28/*"ElasticIn"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::ElasticOut(), ::STRINGS[29/*"ElasticOut"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::ElasticInOut(), ::STRINGS[30/*"ElasticInOut"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::BackIn(), ::STRINGS[31/*"BackIn"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::BackOut(), ::STRINGS[32/*"BackOut"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::BackInOut(), ::STRINGS[33/*"BackInOut"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::BounceIn(), ::STRINGS[34/*"BounceIn"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::BounceOut(), ::STRINGS[35/*"BounceOut"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::BounceInOut(), ::STRINGS[36/*"BounceInOut"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Transparent()), ::STRINGS[37/*"Transparent"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Transparent(), ::STRINGS[37/*"Transparent"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Black()), ::STRINGS[38/*"Black"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Black(), ::STRINGS[38/*"Black"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Silver()), ::STRINGS[39/*"Silver"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Silver(), ::STRINGS[39/*"Silver"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Gray()), ::STRINGS[40/*"Gray"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Gray(), ::STRINGS[40/*"Gray"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::White()), ::STRINGS[41/*"White"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::White(), ::STRINGS[41/*"White"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Maroon()), ::STRINGS[42/*"Maroon"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Maroon(), ::STRINGS[42/*"Maroon"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Red()), ::STRINGS[43/*"Red"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Red(), ::STRINGS[43/*"Red"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Purple()), ::STRINGS[44/*"Purple"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Purple(), ::STRINGS[44/*"Purple"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Fuchsia()), ::STRINGS[45/*"Fuchsia"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Fuchsia(), ::STRINGS[45/*"Fuchsia"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Green()), ::STRINGS[46/*"Green"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Green(), ::STRINGS[46/*"Green"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Lime()), ::STRINGS[47/*"Lime"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Lime(), ::STRINGS[47/*"Lime"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Olive()), ::STRINGS[48/*"Olive"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Olive(), ::STRINGS[48/*"Olive"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Yellow()), ::STRINGS[49/*"Yellow"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Yellow(), ::STRINGS[49/*"Yellow"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Navy()), ::STRINGS[50/*"Navy"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Navy(), ::STRINGS[50/*"Navy"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Blue()), ::STRINGS[51/*"Blue"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Blue(), ::STRINGS[51/*"Blue"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Teal()), ::STRINGS[52/*"Teal"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Teal(), ::STRINGS[52/*"Teal"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Aqua()), ::STRINGS[53/*"Aqua"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Aqua(), ::STRINGS[53/*"Aqua"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Elements::TransformOrigins::TopLeft(), ::STRINGS[54/*"TopLeft"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Elements::TransformOrigins::Center(), ::STRINGS[55/*"Center"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Elements::TransformOrigins::Anchor(), ::STRINGS[56/*"Anchor"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Elements::TransformOrigins::HorizontalBoxCenter(), ::STRINGS[57/*"HorizontalB...*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Elements::TransformOrigins::VerticalBoxCenter(), ::STRINGS[58/*"VerticalBox...*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Elements::TranslationModes::TransformOriginOffset(), ::STRINGS[59/*"TransformOr...*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Elements::TranslationModes::PositionOffset(), ::STRINGS[60/*"PositionOff...*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Elements::TranslationModes::SizeFactor(), ::STRINGS[61/*"SizeFactor"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Elements::TranslationModes::Size(), ::STRINGS[62/*"Size"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::TranslationModes::Size(), ::STRINGS[62/*"Size"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Triggers::Actions::GiveFocus::Singleton(), ::STRINGS[63/*"GiveFocus"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Triggers::WhileKeyboardVisible::Keyboard(), ::STRINGS[64/*"Keyboard"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Triggers::LayoutTransition::PositionLayoutChange(), ::STRINGS[65/*"LayoutChange"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Triggers::LayoutTransition::SizeLayoutChange(), ::STRINGS[65/*"LayoutChange"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Triggers::LayoutTransition::WorldPositionChange(), ::STRINGS[66/*"WorldPositi...*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Triggers::LayoutTransition::PositionChange(), ::STRINGS[67/*"PositionCha...*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Triggers::LayoutTransition::ResizeSizeChange(), ::STRINGS[68/*"SizeChange"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Triggers::LayoutTransition::ScalingSizeChange(), ::STRINGS[68/*"SizeChange"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Triggers::IScrolledLengths::Points(), ::STRINGS[69/*"Points"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Triggers::IScrolledLengths::Pixels(), ::STRINGS[70/*"Pixels"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Triggers::IScrolledLengths::ContentSize(), ::STRINGS[71/*"ContentSize"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Triggers::IScrolledLengths::ScrollViewSize(), ::STRINGS[72/*"ScrollViewS...*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Resources::MemoryPolicy::PreloadRetain(), ::STRINGS[73/*"PreloadRetain"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Resources::MemoryPolicy::UnloadUnused(), ::STRINGS[74/*"UnloadUnused"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Resources::MemoryPolicy::UnloadInBackgroundPolicy(), ::STRINGS[75/*"UnloadInBac...*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Font::PlatformDefault(), ::STRINGS[76/*"PlatformDef...*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::ScalingModes::Identity(), ::STRINGS[77/*"Identity"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::TranslationModes::Local(), ::STRINGS[78/*"Local"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::TranslationModes::ParentSize(), ::STRINGS[79/*"ParentSize"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::TranslationModes::Width(), ::STRINGS[80/*"Width"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::TranslationModes::Height(), ::STRINGS[81/*"Height"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(MainView::byjente_, ::STRINGS[82/*"byjente"*/]);
    MainView::byjente_ = ::g::Fuse::Resources::FileImageSource::New2();
    ::g::Uno::UX::Resource::SetGlobalKey(MainView::byjente_, ::STRINGS[82/*"byjente"*/]);
    uPtr(MainView::byjente_)->File(::g::Uno::UX::BundleFileSource::New1(::g::testios_bundle::back210c96fe()));
}

static void MainView_build(uType* type)
{
    ::STRINGS[0] = uString::Const("nvh");
    ::STRINGS[1] = uString::Const("webView");
    ::STRINGS[2] = uString::Const("Url");
    ::STRINGS[3] = uString::Const("Opacity");
    ::STRINGS[4] = uString::Const("Value");
    ::STRINGS[5] = uString::Const("Message");
    ::STRINGS[6] = uString::Const("Linear");
    ::STRINGS[7] = uString::Const("QuadraticIn");
    ::STRINGS[8] = uString::Const("QuadraticOut");
    ::STRINGS[9] = uString::Const("QuadraticInOut");
    ::STRINGS[10] = uString::Const("CubicIn");
    ::STRINGS[11] = uString::Const("CubicOut");
    ::STRINGS[12] = uString::Const("CubicInOut");
    ::STRINGS[13] = uString::Const("QuarticIn");
    ::STRINGS[14] = uString::Const("QuarticOut");
    ::STRINGS[15] = uString::Const("QuarticInOut");
    ::STRINGS[16] = uString::Const("QuinticIn");
    ::STRINGS[17] = uString::Const("QuinticOut");
    ::STRINGS[18] = uString::Const("QuinticInOut");
    ::STRINGS[19] = uString::Const("SinusoidalIn");
    ::STRINGS[20] = uString::Const("SinusoidalOut");
    ::STRINGS[21] = uString::Const("SinusoidalInOut");
    ::STRINGS[22] = uString::Const("ExponentialIn");
    ::STRINGS[23] = uString::Const("ExponentialOut");
    ::STRINGS[24] = uString::Const("ExponentialInOut");
    ::STRINGS[25] = uString::Const("CircularIn");
    ::STRINGS[26] = uString::Const("CircularOut");
    ::STRINGS[27] = uString::Const("CircularInOut");
    ::STRINGS[28] = uString::Const("ElasticIn");
    ::STRINGS[29] = uString::Const("ElasticOut");
    ::STRINGS[30] = uString::Const("ElasticInOut");
    ::STRINGS[31] = uString::Const("BackIn");
    ::STRINGS[32] = uString::Const("BackOut");
    ::STRINGS[33] = uString::Const("BackInOut");
    ::STRINGS[34] = uString::Const("BounceIn");
    ::STRINGS[35] = uString::Const("BounceOut");
    ::STRINGS[36] = uString::Const("BounceInOut");
    ::STRINGS[37] = uString::Const("Transparent");
    ::STRINGS[38] = uString::Const("Black");
    ::STRINGS[39] = uString::Const("Silver");
    ::STRINGS[40] = uString::Const("Gray");
    ::STRINGS[41] = uString::Const("White");
    ::STRINGS[42] = uString::Const("Maroon");
    ::STRINGS[43] = uString::Const("Red");
    ::STRINGS[44] = uString::Const("Purple");
    ::STRINGS[45] = uString::Const("Fuchsia");
    ::STRINGS[46] = uString::Const("Green");
    ::STRINGS[47] = uString::Const("Lime");
    ::STRINGS[48] = uString::Const("Olive");
    ::STRINGS[49] = uString::Const("Yellow");
    ::STRINGS[50] = uString::Const("Navy");
    ::STRINGS[51] = uString::Const("Blue");
    ::STRINGS[52] = uString::Const("Teal");
    ::STRINGS[53] = uString::Const("Aqua");
    ::STRINGS[54] = uString::Const("TopLeft");
    ::STRINGS[55] = uString::Const("Center");
    ::STRINGS[56] = uString::Const("Anchor");
    ::STRINGS[57] = uString::Const("HorizontalBoxCenter");
    ::STRINGS[58] = uString::Const("VerticalBoxCenter");
    ::STRINGS[59] = uString::Const("TransformOriginOffset");
    ::STRINGS[60] = uString::Const("PositionOffset");
    ::STRINGS[61] = uString::Const("SizeFactor");
    ::STRINGS[62] = uString::Const("Size");
    ::STRINGS[63] = uString::Const("GiveFocus");
    ::STRINGS[64] = uString::Const("Keyboard");
    ::STRINGS[65] = uString::Const("LayoutChange");
    ::STRINGS[66] = uString::Const("WorldPositionChange");
    ::STRINGS[67] = uString::Const("PositionChange");
    ::STRINGS[68] = uString::Const("SizeChange");
    ::STRINGS[69] = uString::Const("Points");
    ::STRINGS[70] = uString::Const("Pixels");
    ::STRINGS[71] = uString::Const("ContentSize");
    ::STRINGS[72] = uString::Const("ScrollViewSize");
    ::STRINGS[73] = uString::Const("PreloadRetain");
    ::STRINGS[74] = uString::Const("UnloadUnused");
    ::STRINGS[75] = uString::Const("UnloadInBackground");
    ::STRINGS[76] = uString::Const("PlatformDefault");
    ::STRINGS[77] = uString::Const("Identity");
    ::STRINGS[78] = uString::Const("Local");
    ::STRINGS[79] = uString::Const("ParentSize");
    ::STRINGS[80] = uString::Const("Width");
    ::STRINGS[81] = uString::Const("Height");
    ::STRINGS[82] = uString::Const("byjente");
    ::STRINGS[83] = uString::Const("pageLoaded");
    ::STRINGS[84] = uString::Const("url");
    ::STRINGS[85] = uString::Const("showWebView");
    ::STRINGS[86] = uString::Const("myPicture");
    ::STRINGS[87] = uString::Const("myName");
    ::STRINGS[88] = uString::Const("hasProfile");
    ::STRINGS[89] = uString::Const("login");
    ::STRINGS[90] = uString::Const("MainView.ux");
    ::STRINGS[91] = uString::Const("\342\210\236");
    ::STRINGS[92] = uString::Const("return { url : document.location.href };");
    ::STRINGS[93] = uString::Const("Welcome");
    ::STRINGS[94] = uString::Const("Login with facebook");
    ::STRINGS[95] = uString::Const("LOG IN");
    ::STRINGS[96] = uString::Const("SIGN UP");
    ::TYPES[0] = ::g::Uno::String_typeof()->Array();
    ::TYPES[1] = ::g::Fuse::Reactive::DataBinding_typeof()->MakeType(::g::Uno::String_typeof(), NULL);
    ::TYPES[2] = ::g::Fuse::Animations::Change_typeof()->MakeType(::g::Uno::Float_typeof(), NULL);
    ::TYPES[3] = ::g::Fuse::Reactive::DataBinding_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL);
    ::TYPES[4] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL);
    ::TYPES[5] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL);
    ::TYPES[6] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Triggers::Actions::TriggerAction_typeof(), NULL);
    ::TYPES[7] = ::g::Fuse::Triggers::Actions::JSEventHandler_typeof();
    ::TYPES[8] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Animations::Animator_typeof(), NULL);
    ::TYPES[9] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Drawing::Stroke_typeof(), NULL);
    ::TYPES[10] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Drawing::Brush_typeof(), NULL);
    ::TYPES[11] = ::g::Fuse::Gestures::ClickedHandler_typeof();
    ::TYPES[12] = ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL);
    type->SetFields(10,
        ::g::Uno::UX::NameTable_typeof(), offsetof(::g::MainView, __g_nametable1), 0,
        ::g::Fuse::Controls::NativeViewHost_typeof(), offsetof(::g::MainView, nvh), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float_typeof(), NULL), offsetof(::g::MainView, nvh_Opacity_inst), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(::g::MainView, temp_eb0), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(::g::MainView, temp_eb1), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL), offsetof(::g::MainView, temp_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(::g::MainView, temp1_Url_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(::g::MainView, temp2_Message_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(::g::MainView, temp3_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL), offsetof(::g::MainView, temp4_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL), offsetof(::g::MainView, temp5_Value_inst), 0,
        ::g::Fuse::Controls::WebView_typeof(), offsetof(::g::MainView, webView), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(::g::MainView, webView_Url_inst), 0,
        ::TYPES[0/*string[]*/], (uintptr_t)&::g::MainView::__g_static_nametable1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector0_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector2_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector3_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector4_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector5_, uFieldFlagsStatic,
        ::g::Fuse::Resources::FileImageSource_typeof(), (uintptr_t)&::g::MainView::byjente_, uFieldFlagsStatic);
    type->Reflection.SetFields(1,
        new uField("byjente", 30));
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)MainView__New2_fn, 0, true, type, 0));
}

::g::Fuse::AppBase_type* MainView_typeof()
{
    static uSStrong< ::g::Fuse::AppBase_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::App_typeof();
    options.FieldCount = 31;
    options.ObjectSize = sizeof(MainView);
    options.TypeSize = sizeof(::g::Fuse::AppBase_type);
    type = (::g::Fuse::AppBase_type*)uClassType::New("MainView", options);
    type->fp_build_ = MainView_build;
    type->fp_ctor_ = (void*)MainView__New2_fn;
    type->fp_cctor_ = MainView__cctor_1_fn;
    return type;
}

// public MainView() :126
void MainView__ctor_4_fn(MainView* __this)
{
    __this->ctor_4();
}

// private void InitializeUX() :130
void MainView__InitializeUX_fn(MainView* __this)
{
    __this->InitializeUX();
}

// public MainView New() :126
void MainView__New2_fn(MainView** __retval)
{
    *__retval = MainView::New2();
}

uSStrong<uArray*> MainView::__g_static_nametable1_;
::g::Uno::UX::Selector MainView::__selector0_;
::g::Uno::UX::Selector MainView::__selector1_;
::g::Uno::UX::Selector MainView::__selector2_;
::g::Uno::UX::Selector MainView::__selector3_;
::g::Uno::UX::Selector MainView::__selector4_;
::g::Uno::UX::Selector MainView::__selector5_;
uSStrong< ::g::Fuse::Resources::FileImageSource*> MainView::byjente_;

// public MainView() [instance] :126
void MainView::ctor_4()
{
    uStackFrame __("MainView", ".ctor()");
    ctor_3();
    InitializeUX();
}

// private void InitializeUX() [instance] :130
void MainView::InitializeUX()
{
    uStackFrame __("MainView", "InitializeUX()");
    ::g::Fuse::Reactive::FuseJS::DiagnosticsImplModule* temp6 = ::g::Fuse::Reactive::FuseJS::DiagnosticsImplModule::New2();
    ::g::Fuse::Reactive::FuseJS::Http* temp7 = ::g::Fuse::Reactive::FuseJS::Http::New2();
    ::g::Fuse::Reactive::FuseJS::TimerModule* temp8 = ::g::Fuse::Reactive::FuseJS::TimerModule::New2();
    ::g::Fuse::Drawing::BrushConverter* temp9 = ::g::Fuse::Drawing::BrushConverter::New1();
    ::g::Fuse::Triggers::BusyTaskModule* temp10 = ::g::Fuse::Triggers::BusyTaskModule::New2();
    ::g::Fuse::FileSystem::FileSystemModule* temp11 = ::g::Fuse::FileSystem::FileSystemModule::New2();
    ::g::Fuse::Storage::StorageModule* temp12 = ::g::Fuse::Storage::StorageModule::New2();
    ::g::Fuse::WebSocket::WebSocketClientModule* temp13 = ::g::Fuse::WebSocket::WebSocketClientModule::New2();
    ::g::Polyfills::Window::WindowModule* temp14 = ::g::Polyfills::Window::WindowModule::New3();
    ::g::FuseJS::Globals* temp15 = ::g::FuseJS::Globals::New2();
    ::g::FuseJS::Lifecycle* temp16 = ::g::FuseJS::Lifecycle::New3();
    ::g::FuseJS::Environment* temp17 = ::g::FuseJS::Environment::New2();
    ::g::FuseJS::Base64* temp18 = ::g::FuseJS::Base64::New2();
    ::g::FuseJS::Bundle* temp19 = ::g::FuseJS::Bundle::New2();
    ::g::FuseJS::FileReaderImpl* temp20 = ::g::FuseJS::FileReaderImpl::New2();
    ::g::FuseJS::UserEvents* temp21 = ::g::FuseJS::UserEvents::New2();
    __g_nametable1 = ::g::Uno::UX::NameTable::New1(NULL, MainView::__g_static_nametable1());
    webView = ::g::Fuse::Controls::WebView::New4();
    webView_Url_inst = ::g::testios_FuseControlsWebView_Url_Property::New1(webView, MainView::__selector0());
    nvh = ::g::Fuse::Controls::NativeViewHost::New3();
    nvh_Opacity_inst = ::g::testios_FuseElementsElement_Opacity_Property::New1(nvh, MainView::__selector1());
    ::g::Fuse::Triggers::WhileTrue* temp = ::g::Fuse::Triggers::WhileTrue::New2();
    temp_Value_inst = ::g::testios_FuseTriggersWhileBool_Value_Property::New1(temp, MainView::__selector2());
    ::g::Fuse::Drawing::ImageFill* temp1 = ::g::Fuse::Drawing::ImageFill::New2();
    temp1_Url_inst = ::g::testios_FuseDrawingImageFill_Url_Property::New1(temp1, MainView::__selector0());
    ::g::Fuse::Triggers::Actions::DebugAction* temp2 = ::g::Fuse::Triggers::Actions::DebugAction::New2();
    temp2_Message_inst = ::g::testios_FuseTriggersActionsDebugAction_Message_Property::New1(temp2, MainView::__selector3());
    ::g::Fuse::Controls::Text* temp3 = ::g::Fuse::Controls::Text::New3();
    temp3_Value_inst = ::g::testios_FuseControlsTextControl_Value_Property::New1(temp3, MainView::__selector2());
    ::g::Fuse::Triggers::WhileTrue* temp4 = ::g::Fuse::Triggers::WhileTrue::New2();
    temp4_Value_inst = ::g::testios_FuseTriggersWhileBool_Value_Property::New1(temp4, MainView::__selector2());
    ::g::Fuse::Triggers::WhileFalse* temp5 = ::g::Fuse::Triggers::WhileFalse::New2();
    temp5_Value_inst = ::g::testios_FuseTriggersWhileBool_Value_Property::New1(temp5, MainView::__selector2());
    ::g::Fuse::iOS::StatusBarConfig* temp22 = ::g::Fuse::iOS::StatusBarConfig::New2();
    ::g::Fuse::Controls::DockPanel* temp23 = ::g::Fuse::Controls::DockPanel::New4();
    ::g::Fuse::Reactive::JavaScript* temp24 = ::g::Fuse::Reactive::JavaScript::New2(__g_nametable1);
    ::g::Fuse::Controls::StatusBarBackground* temp25 = ::g::Fuse::Controls::StatusBarBackground::New3();
    ::g::Fuse::Controls::Rectangle* temp26 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Controls::Text* temp27 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Controls::Panel* temp28 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Controls::Panel* temp29 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Triggers::PageLoaded* temp30 = ::g::Fuse::Triggers::PageLoaded::New2();
    ::g::Fuse::Triggers::Actions::EvaluateJS* temp31 = ::g::Fuse::Triggers::Actions::EvaluateJS::New2();
    temp_eb0 = ::g::Fuse::Reactive::EventBinding::New1(::STRINGS[83/*"pageLoaded"*/]);
    ::g::Fuse::Reactive::DataBinding* temp32 = (::g::Fuse::Reactive::DataBinding*)::g::Fuse::Reactive::DataBinding::New1(::TYPES[1/*Fuse.Reactive.DataBinding<string>*/], webView_Url_inst, ::STRINGS[84/*"url"*/]);
    ::g::Fuse::Triggers::AddingAnimation* temp33 = ::g::Fuse::Triggers::AddingAnimation::New2();
    ::g::Fuse::Animations::Change* temp34 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[2/*Fuse.Animations.Change<float>*/], nvh_Opacity_inst);
    ::g::Fuse::Drawing::StaticSolidColor* temp35 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(0.8666667f, 0.8666667f, 0.8666667f, 1.0f));
    ::g::Fuse::Reactive::DataBinding* temp36 = (::g::Fuse::Reactive::DataBinding*)::g::Fuse::Reactive::DataBinding::New1(::TYPES[3/*Fuse.Reactive.DataBinding<bool>*/], temp_Value_inst, ::STRINGS[85/*"showWebView"*/]);
    ::g::Fuse::Controls::Panel* temp37 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Controls::StackPanel* temp38 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Rectangle* temp39 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Drawing::Stroke* temp40 = ::g::Fuse::Drawing::Stroke::New2();
    ::g::Fuse::Drawing::StaticSolidColor* temp41 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(0.6666667f, 0.6666667f, 0.6666667f, 1.0f));
    ::g::Fuse::Drawing::StaticSolidColor* temp42 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(0.8666667f, 0.8666667f, 0.8666667f, 1.0f));
    ::g::Fuse::Controls::Panel* temp43 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Controls::Circle* temp44 = ::g::Fuse::Controls::Circle::New3();
    ::g::Fuse::Drawing::Stroke* temp45 = ::g::Fuse::Drawing::Stroke::New2();
    ::g::Fuse::Drawing::StaticSolidColor* temp46 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(0.6666667f, 0.6666667f, 0.6666667f, 1.0f));
    ::g::Fuse::Reactive::DataBinding* temp47 = (::g::Fuse::Reactive::DataBinding*)::g::Fuse::Reactive::DataBinding::New1(::TYPES[1/*Fuse.Reactive.DataBinding<string>*/], temp1_Url_inst, ::STRINGS[86/*"myPicture"*/]);
    ::g::Fuse::Gestures::Clicked* temp48 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Reactive::DataBinding* temp49 = (::g::Fuse::Reactive::DataBinding*)::g::Fuse::Reactive::DataBinding::New1(::TYPES[1/*Fuse.Reactive.DataBinding<string>*/], temp2_Message_inst, ::STRINGS[86/*"myPicture"*/]);
    ::g::Fuse::Controls::StackPanel* temp50 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Text* temp51 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Reactive::DataBinding* temp52 = (::g::Fuse::Reactive::DataBinding*)::g::Fuse::Reactive::DataBinding::New1(::TYPES[1/*Fuse.Reactive.DataBinding<string>*/], temp3_Value_inst, ::STRINGS[87/*"myName"*/]);
    ::g::Fuse::Triggers::AddingAnimation* temp53 = ::g::Fuse::Triggers::AddingAnimation::New2();
    ::g::Fuse::Animations::Move* temp54 = ::g::Fuse::Animations::Move::New2();
    ::g::Fuse::Reactive::DataBinding* temp55 = (::g::Fuse::Reactive::DataBinding*)::g::Fuse::Reactive::DataBinding::New1(::TYPES[3/*Fuse.Reactive.DataBinding<bool>*/], temp4_Value_inst, ::STRINGS[88/*"hasProfile"*/]);
    ::g::Fuse::Controls::DockPanel* temp56 = ::g::Fuse::Controls::DockPanel::New4();
    ::g::Fuse::Controls::Rectangle* temp57 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Drawing::StaticSolidColor* temp58 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(0.2313726f, 0.3490196f, 0.5960785f, 1.0f));
    ::g::Fuse::Controls::Image* temp59 = ::g::Fuse::Controls::Image::New3();
    ::g::Fuse::Controls::Text* temp60 = ::g::Fuse::Controls::Text::New3();
    temp_eb1 = ::g::Fuse::Reactive::EventBinding::New1(::STRINGS[89/*"login"*/]);
    ::g::Fuse::Reactive::DataBinding* temp61 = (::g::Fuse::Reactive::DataBinding*)::g::Fuse::Reactive::DataBinding::New1(::TYPES[3/*Fuse.Reactive.DataBinding<bool>*/], temp5_Value_inst, ::STRINGS[88/*"hasProfile"*/]);
    ::g::Fuse::Controls::Rectangle* temp62 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Controls::Button* temp63 = ::g::Fuse::Controls::Button::New5();
    ::g::Fuse::Controls::Text* temp64 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Gestures::WhilePressed* temp65 = ::g::Fuse::Gestures::WhilePressed::New2();
    ::g::Fuse::Animations::Scale* temp66 = ::g::Fuse::Animations::Scale::New2();
    ::g::Fuse::Controls::Button* temp67 = ::g::Fuse::Controls::Button::New5();
    ::g::Fuse::Controls::Text* temp68 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Gestures::WhilePressed* temp69 = ::g::Fuse::Gestures::WhilePressed::New2();
    ::g::Fuse::Animations::Scale* temp70 = ::g::Fuse::Animations::Scale::New2();
    temp22->IsVisible(true);
    temp22->Style(1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp23->Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), temp24);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp23->Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), temp25);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp23->Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), temp26);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp23->Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), temp28);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp23->Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), temp62);
    temp24->LineNumber(5);
    temp24->FileName(::STRINGS[90/*"MainView.ux"*/]);
    temp24->File(::g::Uno::UX::BundleFileSource::New1(::g::testios_bundle::MainView318943ea()));
    ::g::Fuse::Controls::DockPanel::SetDock(temp25, 2);
    temp26->Width(::g::Uno::UX::Size__New1(100.0f, 4));
    temp26->Height(::g::Uno::UX::Size__New1(10.0f, 4));
    temp26->Alignment(6);
    temp26->Fill(::g::Fuse::Drawing::Brushes::White());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp26->Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), temp27);
    temp27->Value(::STRINGS[91/*"∞"*/]);
    temp27->FontSize(60.0f);
    temp27->TextColor(::g::Uno::Float4__New2(0.2039216f, 0.5960785f, 0.8588235f, 1.0f));
    temp27->Alignment(10);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp28->Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), temp29);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp28->Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), temp37);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp28->Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), temp5);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp29->Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), temp);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Nodes()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), nvh);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Bindings()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp36);
    uPtr(nvh)->Name(MainView::__selector4());
    uPtr(nvh)->Background(temp35);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(nvh)->Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), webView);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(nvh)->Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), temp33);
    uPtr(webView)->Name(MainView::__selector5());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(webView)->Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), temp30);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(webView)->Bindings()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp32);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp30->Actions()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp31);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp30->Bindings()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb0);
    temp31->JavaScript(::STRINGS[92/*"return { ur...*/]);
    temp31->add_Handler(uDelegate::New(::TYPES[7/*Fuse.Triggers.Actions.JSEventHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb0)));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp33->Animators()), ::TYPES[8/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp34);
    ::g::Fuse::Animations::Change__set_Value_fn(temp34, uCRef(0.0f));
    temp34->Duration(0.3);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp37->Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), temp4);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp4->Nodes()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), temp38);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp4->Bindings()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp55);
    temp38->Alignment(10);
    temp38->Padding(::g::Uno::Float4__New2(20.0f, 20.0f, 20.0f, 20.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp38->Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), temp39);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp38->Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), temp43);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp38->Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), temp50);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp38->Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), temp53);
    temp39->CornerRadius(::g::Uno::Float4__New2(15.0f, 15.0f, 15.0f, 15.0f));
    temp39->Layer(1);
    temp39->Fill(temp42);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp39->Strokes()), ::TYPES[9/*Uno.Collections.ICollection<Fuse.Drawing.Stroke>*/]), temp40);
    temp40->Width(2.0f);
    temp40->Brush(temp41);
    temp43->Width(::g::Uno::UX::Size__New1(100.0f, 1));
    temp43->Height(::g::Uno::UX::Size__New1(100.0f, 1));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp43->Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), temp44);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp43->Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), temp48);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp44->Fills()), ::TYPES[10/*Uno.Collections.ICollection<Fuse.Drawing.Brush>*/]), temp1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp44->Strokes()), ::TYPES[9/*Uno.Collections.ICollection<Fuse.Drawing.Stroke>*/]), temp45);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp44->Bindings()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp47);
    temp45->Width(4.0f);
    temp45->Brush(temp46);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp48->Actions()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp48->Bindings()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp49);
    temp50->Alignment(10);
    temp50->Margin(::g::Uno::Float4__New2(10.0f, 10.0f, 10.0f, 10.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp50->Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), temp51);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp50->Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), temp3);
    temp51->Value(::STRINGS[93/*"Welcome"*/]);
    temp51->FontSize(22.0f);
    temp51->TextAlignment(1);
    temp3->FontSize(26.0f);
    temp3->TextAlignment(1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp3->Bindings()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp52);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp53->Animators()), ::TYPES[8/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp54);
    temp54->Y(1.0f);
    temp54->Duration(1.5);
    temp54->RelativeTo(::g::Fuse::TranslationModes::ParentSize());
    temp54->Easing(::g::Fuse::Animations::Easing::BackIn());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp5->Nodes()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), temp56);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp5->Bindings()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp61);
    temp56->Height(::g::Uno::UX::Size__New1(60.0f, 1));
    temp56->Alignment(10);
    temp56->Padding(::g::Uno::Float4__New2(5.0f, 5.0f, 15.0f, 5.0f));
    ::g::Fuse::Gestures::Clicked::AddHandler(temp56, uDelegate::New(::TYPES[11/*Fuse.Gestures.ClickedHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb1)));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp56->Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), temp57);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp56->Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), temp59);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp56->Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), temp60);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp56->Bindings()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb1);
    temp57->CornerRadius(::g::Uno::Float4__New2(4.0f, 4.0f, 4.0f, 4.0f));
    temp57->Layer(1);
    temp57->Fill(temp58);
    temp59->Margin(::g::Uno::Float4__New2(8.0f, 8.0f, 10.0f, 8.0f));
    ::g::Fuse::Controls::DockPanel::SetDock(temp59, 0);
    temp59->File(::g::Uno::UX::BundleFileSource::New1(::g::testios_bundle::FBfLogo__white_5122c25ed0d()));
    temp60->Value(::STRINGS[94/*"Login with ...*/]);
    temp60->FontSize(20.0f);
    temp60->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp60->Alignment(10);
    temp62->Background(::g::Fuse::Drawing::Brushes::Transparent());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp62->Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), temp63);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp62->Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), temp67);
    temp63->Color(::g::Fuse::Drawing::Colors::Black());
    temp63->Width(::g::Uno::UX::Size__New1(50.0f, 4));
    temp63->Height(::g::Uno::UX::Size__New1(10.0f, 4));
    temp63->Alignment(13);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp63->Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), temp64);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp63->Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), temp65);
    temp64->Value(::STRINGS[95/*"LOG IN"*/]);
    temp64->TextColor(::g::Fuse::Drawing::Colors::White());
    temp64->Alignment(10);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp65->Animators()), ::TYPES[8/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp66);
    temp66->Factor(0.9f);
    temp66->Easing(::g::Fuse::Animations::Easing::BounceIn());
    temp66->EasingBack(::g::Fuse::Animations::Easing::BounceOut());
    temp67->Color(::g::Uno::Float4__New2(0.1803922f, 0.8f, 0.4431373f, 1.0f));
    temp67->Width(::g::Uno::UX::Size__New1(50.0f, 4));
    temp67->Height(::g::Uno::UX::Size__New1(10.0f, 4));
    temp67->Alignment(15);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp67->Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), temp68);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp67->Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), temp69);
    temp68->Value(::STRINGS[96/*"SIGN UP"*/]);
    temp68->TextColor(::g::Fuse::Drawing::Colors::White());
    temp68->Alignment(10);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp69->Animators()), ::TYPES[8/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp70);
    temp70->Factor(0.9f);
    temp70->EasingBack(::g::Fuse::Animations::Easing::BounceOut());
    uPtr(__g_nametable1)->This(this);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[12/*Uno.Collections.ICollection<object>*/]), nvh);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[12/*Uno.Collections.ICollection<object>*/]), webView);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), temp22);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), temp23);
}

// public MainView New() [static] :126
MainView* MainView::New2()
{
    MainView* obj1 = (MainView*)uNew(MainView_typeof());
    obj1->ctor_4();
    return obj1;
}
// }

} // ::g
