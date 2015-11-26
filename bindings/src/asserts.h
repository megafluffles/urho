// THIS CODE IS AUTOGENERATED BY SharpieBinder/StructsValidator

#if defined(_WIN64) || defined(__x86_64__) || defined(__ppc64__) // generated for x64 only

using namespace Urho3D;

void check_bindings_offsets()
{

	// IntVector2:
	static_assert(sizeof(IntVector2) == 8, "IntVector2 has wrong size (8)");
	static_assert(offsetof(IntVector2, x_) == 0, "IntVector2.X has wrong offset (0)");
	static_assert(offsetof(IntVector2, y_) == 4, "IntVector2.Y has wrong offset (4)");

	// Plane:
	static_assert(sizeof(Plane) == 28, "Plane has wrong size (28)");
	static_assert(offsetof(Plane, normal_) == 0, "Plane.Normal has wrong offset (0)");
	static_assert(offsetof(Plane, absNormal_) == 12, "Plane.AbsNormal has wrong offset (12)");
	static_assert(offsetof(Plane, d_) == 24, "Plane.D has wrong offset (24)");

	// Ray:
	static_assert(sizeof(Ray) == 24, "Ray has wrong size (24)");
	static_assert(offsetof(Ray, origin_) == 0, "Ray.Origin has wrong offset (0)");
	static_assert(offsetof(Ray, direction_) == 12, "Ray.Direction has wrong offset (12)");

	// IntRect:
	static_assert(sizeof(IntRect) == 16, "IntRect has wrong size (16)");
	static_assert(offsetof(IntRect, left_) == 0, "IntRect.Left has wrong offset (0)");
	static_assert(offsetof(IntRect, top_) == 4, "IntRect.Top has wrong offset (4)");
	static_assert(offsetof(IntRect, right_) == 8, "IntRect.Right has wrong offset (8)");
	static_assert(offsetof(IntRect, bottom_) == 12, "IntRect.Bottom has wrong offset (12)");

	// Rect:
	static_assert(sizeof(Rect) == 20, "Rect has wrong size (20)");
	static_assert(offsetof(Rect, min_) == 0, "Rect.Min has wrong offset (0)");
	static_assert(offsetof(Rect, max_) == 8, "Rect.Max has wrong offset (8)");
	static_assert(offsetof(Rect, defined_) == 16, "Rect.defined has wrong offset (16)");

	// ResourceRef:
	//FIX: static_assert(sizeof(ResourceRef) == 24, "ResourceRef has wrong size (24)");
	static_assert(offsetof(ResourceRef, type_) == 0, "ResourceRef.Type has wrong offset (0)");
	//FIX: static_assert(offsetof(ResourceRef, name_) == 8, "ResourceRef.Name has wrong offset (8)");

	// BoundingBox:
	static_assert(sizeof(BoundingBox) == 28, "BoundingBox has wrong size (28)");
	static_assert(offsetof(BoundingBox, min_) == 0, "BoundingBox.Min has wrong offset (0)");
	static_assert(offsetof(BoundingBox, max_) == 12, "BoundingBox.Max has wrong offset (12)");
	static_assert(offsetof(BoundingBox, defined_) == 24, "BoundingBox.defined has wrong offset (24)");

	// AnimationTriggerPoint:
	//FIX: static_assert(sizeof(AnimationTriggerPoint) == 16, "AnimationTriggerPoint has wrong size (16)");
	static_assert(offsetof(AnimationTriggerPoint, time_) == 0, "AnimationTriggerPoint.Time has wrong offset (0)");
	//FIX: static_assert(offsetof(AnimationTriggerPoint, data_) == 8, "AnimationTriggerPoint.Variant has wrong offset (8)");

	// Matrix3x4:
	static_assert(sizeof(Matrix3x4) == 48, "Matrix3x4 has wrong size (48)");
	static_assert(offsetof(Matrix3x4, m00_) == 0, "Matrix3x4.m00 has wrong offset (0)");
	static_assert(offsetof(Matrix3x4, m01_) == 4, "Matrix3x4.m01 has wrong offset (4)");
	static_assert(offsetof(Matrix3x4, m02_) == 8, "Matrix3x4.m02 has wrong offset (8)");
	static_assert(offsetof(Matrix3x4, m03_) == 12, "Matrix3x4.m03 has wrong offset (12)");
	static_assert(offsetof(Matrix3x4, m10_) == 16, "Matrix3x4.m10 has wrong offset (16)");
	static_assert(offsetof(Matrix3x4, m11_) == 20, "Matrix3x4.m11 has wrong offset (20)");
	static_assert(offsetof(Matrix3x4, m12_) == 24, "Matrix3x4.m12 has wrong offset (24)");
	static_assert(offsetof(Matrix3x4, m13_) == 28, "Matrix3x4.m13 has wrong offset (28)");
	static_assert(offsetof(Matrix3x4, m20_) == 32, "Matrix3x4.m20 has wrong offset (32)");
	static_assert(offsetof(Matrix3x4, m21_) == 36, "Matrix3x4.m21 has wrong offset (36)");
	static_assert(offsetof(Matrix3x4, m22_) == 40, "Matrix3x4.m22 has wrong offset (40)");
	static_assert(offsetof(Matrix3x4, m23_) == 44, "Matrix3x4.m23 has wrong offset (44)");

	// Color:
	static_assert(sizeof(Color) == 16, "Color has wrong size (16)");
	static_assert(offsetof(Color, r_) == 0, "Color.R has wrong offset (0)");
	static_assert(offsetof(Color, g_) == 4, "Color.G has wrong offset (4)");
	static_assert(offsetof(Color, b_) == 8, "Color.B has wrong offset (8)");
	static_assert(offsetof(Color, a_) == 12, "Color.A has wrong offset (12)");

	// TouchState:
	static_assert(sizeof(TouchState) == 48, "TouchState has wrong size (48)");
	static_assert(offsetof(TouchState, touchID_) == 0, "TouchState.TouchID has wrong offset (0)");
	static_assert(offsetof(TouchState, position_) == 4, "TouchState.Position has wrong offset (4)");
	static_assert(offsetof(TouchState, lastPosition_) == 12, "TouchState.LastPosition has wrong offset (12)");
	static_assert(offsetof(TouchState, delta_) == 20, "TouchState.Delta has wrong offset (20)");
	static_assert(offsetof(TouchState, pressure_) == 28, "TouchState.Pressure has wrong offset (28)");
	static_assert(offsetof(TouchState, touchedElement_) == 32, "TouchState._TouchedElement has wrong offset (32)");

	// ColorFrame:
	static_assert(sizeof(ColorFrame) == 20, "ColorFrame has wrong size (20)");
	static_assert(offsetof(ColorFrame, color_) == 0, "ColorFrame.Color has wrong offset (0)");
	static_assert(offsetof(ColorFrame, time_) == 16, "ColorFrame.Time has wrong offset (16)");

	// JoystickState:
	//FIX: static_assert(sizeof(JoystickState) == 112, "JoystickState has wrong size (112)");
	static_assert(offsetof(JoystickState, joystick_) == 0, "JoystickState.JoystickPtr has wrong offset (0)");
	static_assert(offsetof(JoystickState, joystickID_) == 8, "JoystickState.JoystickIdPtr has wrong offset (8)");
	//FIX: static_assert(offsetof(JoystickState, controller_) == 16, "JoystickState.ControllerPtr has wrong offset (16)");
	//FIX: static_assert(offsetof(JoystickState, screenJoystick_) == 24, "JoystickState.ScreenJoystickPtr has wrong offset (24)");
	//FIX: static_assert(offsetof(JoystickState, name_) == 32, "JoystickState.Name has wrong offset (32)");
	//FIX: static_assert(offsetof(JoystickState, buttons_) == 48, "JoystickState.Buttons has wrong offset (48)");
	//FIX: static_assert(offsetof(JoystickState, buttonPress_) == 64, "JoystickState.ButtonPress has wrong offset (64)");
	//FIX: static_assert(offsetof(JoystickState, axes_) == 80, "JoystickState.Axes has wrong offset (80)");
	//FIX: static_assert(offsetof(JoystickState, hats_) == 96, "JoystickState.Hats has wrong offset (96)");

	// Bone:
	//FIX: static_assert(sizeof(Bone) == 168, "Bone has wrong size (168)");
	static_assert(offsetof(Bone, name_) == 0, "Bone.Name has wrong offset (0)");
	static_assert(offsetof(Bone, nameHash_) == 16, "Bone.NameHash has wrong offset (16)");
	static_assert(offsetof(Bone, parentIndex_) == 20, "Bone.ParentIndex has wrong offset (20)");
	static_assert(offsetof(Bone, initialPosition_) == 24, "Bone.InitialPosition has wrong offset (24)");
	static_assert(offsetof(Bone, initialRotation_) == 36, "Bone.InitialRotation has wrong offset (36)");
	static_assert(offsetof(Bone, initialScale_) == 52, "Bone.InitialScale has wrong offset (52)");
	static_assert(offsetof(Bone, offsetMatrix_) == 64, "Bone.OffsetMatrix has wrong offset (64)");
	static_assert(offsetof(Bone, animated_) == 112, "Bone.animated has wrong offset (112)");
	static_assert(offsetof(Bone, collisionMask_) == 113, "Bone.CollisionMask has wrong offset (113)");
	static_assert(offsetof(Bone, radius_) == 116, "Bone.Radius has wrong offset (116)");
	static_assert(offsetof(Bone, boundingBox_) == 120, "Bone.BoundingBox has wrong offset (120)");
	//FIX: static_assert(offsetof(Bone, node_) == 152, "Bone.Node has wrong offset (152)");

	// RayQueryResult:
	//FIX: static_assert(sizeof(RayQueryResult) == 64, "RayQueryResult has wrong size (64)");
	static_assert(offsetof(RayQueryResult, position_) == 0, "RayQueryResult.Position has wrong offset (0)");
	static_assert(offsetof(RayQueryResult, normal_) == 12, "RayQueryResult.Normal has wrong offset (12)");
	static_assert(offsetof(RayQueryResult, textureUV_) == 24, "RayQueryResult.TextureUV has wrong offset (24)");
	static_assert(offsetof(RayQueryResult, distance_) == 32, "RayQueryResult.Distance has wrong offset (32)");
	//FIX: static_assert(offsetof(RayQueryResult, drawable_) == 40, "RayQueryResult.drawablePtr has wrong offset (40)");
	//FIX: static_assert(offsetof(RayQueryResult, node_) == 48, "RayQueryResult.nodePtr has wrong offset (48)");
	//FIX: static_assert(offsetof(RayQueryResult, subObject_) == 56, "RayQueryResult.SubObject has wrong offset (56)");

	// FontGlyph:
	static_assert(sizeof(FontGlyph) == 24, "FontGlyph has wrong size (24)");
	static_assert(offsetof(FontGlyph, x_) == 0, "FontGlyph.X has wrong offset (0)");
	static_assert(offsetof(FontGlyph, y_) == 2, "FontGlyph.Y has wrong offset (2)");
	static_assert(offsetof(FontGlyph, width_) == 4, "FontGlyph.Width has wrong offset (4)");
	static_assert(offsetof(FontGlyph, height_) == 6, "FontGlyph.Height has wrong offset (6)");
	static_assert(offsetof(FontGlyph, offsetX_) == 8, "FontGlyph.OffsetX has wrong offset (8)");
	static_assert(offsetof(FontGlyph, offsetY_) == 10, "FontGlyph.OffsetY has wrong offset (10)");
	static_assert(offsetof(FontGlyph, advanceX_) == 12, "FontGlyph.AdvanceX has wrong offset (12)");
	static_assert(offsetof(FontGlyph, page_) == 16, "FontGlyph.Page has wrong offset (16)");
	static_assert(offsetof(FontGlyph, used_) == 20, "FontGlyph.used has wrong offset (20)");

	// CompressedLevel:
	static_assert(sizeof(CompressedLevel) == 40, "CompressedLevel has wrong size (40)");
	static_assert(offsetof(CompressedLevel, data_) == 0, "CompressedLevel.ImageData has wrong offset (0)");
	static_assert(offsetof(CompressedLevel, format_) == 8, "CompressedLevel.Format has wrong offset (8)");
	static_assert(offsetof(CompressedLevel, width_) == 12, "CompressedLevel.Width has wrong offset (12)");
	static_assert(offsetof(CompressedLevel, height_) == 16, "CompressedLevel.Height has wrong offset (16)");
	static_assert(offsetof(CompressedLevel, depth_) == 20, "CompressedLevel.Depth has wrong offset (20)");
	static_assert(offsetof(CompressedLevel, blockSize_) == 24, "CompressedLevel.BlockSize has wrong offset (24)");
	static_assert(offsetof(CompressedLevel, dataSize_) == 28, "CompressedLevel.DataSize has wrong offset (28)");
	static_assert(offsetof(CompressedLevel, rowSize_) == 32, "CompressedLevel.RowSize has wrong offset (32)");
	static_assert(offsetof(CompressedLevel, rows_) == 36, "CompressedLevel.RowCount has wrong offset (36)");

	// Billboard:
	static_assert(sizeof(Billboard) == 68, "Billboard has wrong size (68)");
	static_assert(offsetof(Billboard, position_) == 0, "Billboard.Position has wrong offset (0)");
	static_assert(offsetof(Billboard, size_) == 12, "Billboard.Size has wrong offset (12)");
	static_assert(offsetof(Billboard, uv_) == 20, "Billboard.Uv has wrong offset (20)");
	static_assert(offsetof(Billboard, color_) == 40, "Billboard.Color has wrong offset (40)");
	static_assert(offsetof(Billboard, rotation_) == 56, "Billboard.Rotation has wrong offset (56)");
	static_assert(offsetof(Billboard, enabled_) == 60, "Billboard.enabled has wrong offset (60)");
	static_assert(offsetof(Billboard, sortDistance_) == 64, "Billboard.SortDistance has wrong offset (64)");

	// BiasParameters:
	static_assert(sizeof(BiasParameters) == 8, "BiasParameters has wrong size (8)");
	static_assert(offsetof(BiasParameters, constantBias_) == 0, "BiasParameters.ConstantBias has wrong offset (0)");
	static_assert(offsetof(BiasParameters, slopeScaledBias_) == 4, "BiasParameters.SlopeScaleBias has wrong offset (4)");

	// FocusParameters:
	static_assert(sizeof(FocusParameters) == 12, "FocusParameters has wrong size (12)");
	static_assert(offsetof(FocusParameters, focus_) == 0, "FocusParameters.Focus has wrong offset (0)");
	static_assert(offsetof(FocusParameters, nonUniform_) == 1, "FocusParameters.NonUniform has wrong offset (1)");
	static_assert(offsetof(FocusParameters, autoSize_) == 2, "FocusParameters.AutoSize has wrong offset (2)");
	static_assert(offsetof(FocusParameters, quantize_) == 4, "FocusParameters.Quantize has wrong offset (4)");
	static_assert(offsetof(FocusParameters, minView_) == 8, "FocusParameters.MinView has wrong offset (8)");

	// Vector3:
	static_assert(sizeof(Vector3) == 12, "Vector3 has wrong size (12)");
	static_assert(offsetof(Vector3, x_) == 0, "Vector3.X has wrong offset (0)");
	static_assert(offsetof(Vector3, y_) == 4, "Vector3.Y has wrong offset (4)");
	static_assert(offsetof(Vector3, z_) == 8, "Vector3.Z has wrong offset (8)");

	// Vector2:
	static_assert(sizeof(Vector2) == 8, "Vector2 has wrong size (8)");
	static_assert(offsetof(Vector2, x_) == 0, "Vector2.X has wrong offset (0)");
	static_assert(offsetof(Vector2, y_) == 4, "Vector2.Y has wrong offset (4)");

	// Vector4:
	static_assert(sizeof(Vector4) == 16, "Vector4 has wrong size (16)");
	static_assert(offsetof(Vector4, x_) == 0, "Vector4.X has wrong offset (0)");
	static_assert(offsetof(Vector4, y_) == 4, "Vector4.Y has wrong offset (4)");
	static_assert(offsetof(Vector4, z_) == 8, "Vector4.Z has wrong offset (8)");
	static_assert(offsetof(Vector4, w_) == 12, "Vector4.W has wrong offset (12)");

	// PackageEntry:
	static_assert(sizeof(PackageEntry) == 12, "PackageEntry has wrong size (12)");
	static_assert(offsetof(PackageEntry, offset_) == 0, "PackageEntry.Offset has wrong offset (0)");
	static_assert(offsetof(PackageEntry, size_) == 4, "PackageEntry.Size has wrong offset (4)");
	static_assert(offsetof(PackageEntry, checksum_) == 8, "PackageEntry.Checksum has wrong offset (8)");

	// TileMapInfo2D:
	static_assert(sizeof(TileMapInfo2D) == 20, "TileMapInfo2D has wrong size (20)");
	static_assert(offsetof(TileMapInfo2D, orientation_) == 0, "TileMapInfo2D.Orientation has wrong offset (0)");
	static_assert(offsetof(TileMapInfo2D, width_) == 4, "TileMapInfo2D.Width has wrong offset (4)");
	static_assert(offsetof(TileMapInfo2D, height_) == 8, "TileMapInfo2D.Height has wrong offset (8)");
	static_assert(offsetof(TileMapInfo2D, tileWidth_) == 12, "TileMapInfo2D.TileWidth has wrong offset (12)");
	static_assert(offsetof(TileMapInfo2D, tileHeight_) == 16, "TileMapInfo2D.TileHeight has wrong offset (16)");

	// ReplicationState:
	static_assert(sizeof(ReplicationState) == 8, "ReplicationState has wrong size (8)");
	static_assert(offsetof(ReplicationState, connection_) == 0, "ReplicationState.connection has wrong offset (0)");

	// DirtyBits:
	static_assert(sizeof(DirtyBits) == 9, "DirtyBits has wrong size (9)");
	static_assert(offsetof(DirtyBits, data_) == 0, "DirtyBits.Data has wrong offset (0)");
	static_assert(offsetof(DirtyBits, count_) == 8, "DirtyBits.Count has wrong offset (8)");

	// CrowdObstacleAvoidanceParams:
	static_assert(sizeof(CrowdObstacleAvoidanceParams) == 28, "CrowdObstacleAvoidanceParams has wrong size (28)");
	static_assert(offsetof(CrowdObstacleAvoidanceParams, velBias) == 0, "CrowdObstacleAvoidanceParams.VelBias has wrong offset (0)");
	static_assert(offsetof(CrowdObstacleAvoidanceParams, weightDesVel) == 4, "CrowdObstacleAvoidanceParams.WeightDesVel has wrong offset (4)");
	static_assert(offsetof(CrowdObstacleAvoidanceParams, weightCurVel) == 8, "CrowdObstacleAvoidanceParams.WeightCurVel has wrong offset (8)");
	static_assert(offsetof(CrowdObstacleAvoidanceParams, weightSide) == 12, "CrowdObstacleAvoidanceParams.WeightSide has wrong offset (12)");
	static_assert(offsetof(CrowdObstacleAvoidanceParams, weightToi) == 16, "CrowdObstacleAvoidanceParams.WeightToi has wrong offset (16)");
	static_assert(offsetof(CrowdObstacleAvoidanceParams, horizTime) == 20, "CrowdObstacleAvoidanceParams.HorizTime has wrong offset (20)");
	static_assert(offsetof(CrowdObstacleAvoidanceParams, gridSize) == 24, "CrowdObstacleAvoidanceParams.GridSize has wrong offset (24)");
	static_assert(offsetof(CrowdObstacleAvoidanceParams, adaptiveDivs) == 25, "CrowdObstacleAvoidanceParams.AdaptiveDivs has wrong offset (25)");
	static_assert(offsetof(CrowdObstacleAvoidanceParams, adaptiveRings) == 26, "CrowdObstacleAvoidanceParams.AdaptiveRings has wrong offset (26)");
	static_assert(offsetof(CrowdObstacleAvoidanceParams, adaptiveDepth) == 27, "CrowdObstacleAvoidanceParams.AdaptiveDepth has wrong offset (27)");

	// PhysicsRaycastResult:
	//FIX: static_assert(sizeof(PhysicsRaycastResult) == 40, "PhysicsRaycastResult has wrong size (40)");
	static_assert(offsetof(PhysicsRaycastResult, position_) == 0, "PhysicsRaycastResult.Position has wrong offset (0)");
	static_assert(offsetof(PhysicsRaycastResult, normal_) == 12, "PhysicsRaycastResult.Normal has wrong offset (12)");
	static_assert(offsetof(PhysicsRaycastResult, distance_) == 24, "PhysicsRaycastResult.Distance has wrong offset (24)");
	//FIX: static_assert(offsetof(PhysicsRaycastResult, body_) == 32, "PhysicsRaycastResult.bodyPtr has wrong offset (32)");
}
#endif

/* Empty structs (stubs?):

  CollisionGeometryData
  WorkItem
  RefCount
  HashIteratorBase
  Iterator
  ResourceRefList
  Frustum
  Variant
  TextureFrame
  LightBatchQueue
  RenderPathCommand
  GPUObject
  GraphicsImpl
  RandomAccessIterator
  ModelMorph
  Octant
  AnimationTrack
  CustomGeometryVertex
  NetworkState
  ComponentReplicationState
  ShaderParameter
  NodeReplicationState
  dtQueryFilter
  XPathResultSet

*/
