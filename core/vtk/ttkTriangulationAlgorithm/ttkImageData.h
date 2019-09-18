#ifndef _TTK_IMAGEDATA_H
#define _TTK_IMAGEDATA_H

#include <ttkTriangulation.h>
#include <macro.h>

#include <vtkImageData.h>

class ttkImageData : public ttkTriangulation, public vtkImageData {

public:
  static ttkImageData *New();
  ttkTypeMacro(ttkImageData, vtkImageData);

  void CopyStructure(vtkDataSet *other) override;

  void DeepCopy(vtkDataObject *other) override;

  void ShallowCopy(vtkDataObject *other) override;

protected:
  ttkImageData();

  ~ttkImageData() override;
};

#endif /* end of include guard: _TTK_IMAGEDATA_H */
